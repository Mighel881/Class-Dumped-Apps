//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtobufDescriptorProtos_MethodDescriptorProto, ComGoogleProtobufDescriptorProtos_ServiceOptions, ComGoogleProtobufDescriptorProtos_StreamDescriptorProto, NSString;
@protocol JavaUtilList;

@protocol ComGoogleProtobufDescriptorProtos_ServiceDescriptorProtoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleProtobufDescriptorProtos_ServiceOptions *)getOptions;
- (_Bool)hasOptions;
- (ComGoogleProtobufDescriptorProtos_StreamDescriptorProto *)getStreamWithInt:(int)arg1;
- (id <JavaUtilList>)getStreamList;
- (int)getStreamCount;
- (ComGoogleProtobufDescriptorProtos_MethodDescriptorProto *)getMethodWithInt:(int)arg1;
- (id <JavaUtilList>)getMethodList;
- (int)getMethodCount;
- (NSString *)getName;
- (_Bool)hasName;
@end

