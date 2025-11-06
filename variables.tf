variable "region" {
  type = string
  default = "us-east-1"
  description = "AWS region"
}

variable "cidr_block" {
 type = string
 default = "10.10.0.0/16" 
}

variable "cluster_name" {
  type = string
  default = "demo-eks-cluster"
  description = "EKS cluster name"
}

variable "tags" {
type = map(string)
default = {
    terraform  = "true"
    kubernetes = "demo-eks-cluster"
}
description = "Tags to apply to all resources"
}

variable "eks_version" {
  type = string
  default = "1.31"
  description = "EKS version"
}
# variable "bastion-host-sg-id" {
#   type = string
#   default = "sg-0dbce6562d5e2984e"
# }

variable "az-b" {
  type = string
  default = "us-east-1b"
}
variable "az-c" {
  type = string
  default = "us-east-1c"
}