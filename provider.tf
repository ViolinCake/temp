terraform {
required_providers {
    aws = {
    source = "hashicorp/aws"
    version = "5.82.2"
    }
    kubernetes = {
      source = "hashicorp/kubernetes"
      version = "2.38.0"
    }
    helm = {
      source = "hashicorp/helm"
      version = "3.0.2"
    }
}
}

provider "aws" {
region = var.region
}
provider "kubernetes" {
    host = aws_eks_cluster.demo-eks-cluster.endpoint
    cluster_ca_certificate = base64decode(aws_eks_cluster.demo-eks-cluster.certificate_authority.0.data)
    exec {
      api_version = "client.authentication.k8s.io/v1beta1"
      args        = ["eks", "get-token", "--cluster-name", aws_eks_cluster.demo-eks-cluster.name]
      command     = "aws"
    }
}
provider "helm" {
  kubernetes = {
    host = aws_eks_cluster.demo-eks-cluster.endpoint
    cluster_ca_certificate = base64decode(aws_eks_cluster.demo-eks-cluster.certificate_authority.0.data)
    exec = {
      api_version = "client.authentication.k8s.io/v1beta1"
      args        = ["eks", "get-token", "--cluster-name", aws_eks_cluster.demo-eks-cluster.name]
      command     = "aws"
    }
  }
}


# data "aws_eks_cluster" "cluster" {
#   name = var.cluster_name
# }