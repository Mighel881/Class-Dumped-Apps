//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GPBServiceOptions, NSMutableArray, NSString;

@interface GPBServiceDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) NSMutableArray *methodArray; // @dynamic methodArray;
@property(readonly, nonatomic) unsigned long long methodArray_Count; // @dynamic methodArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBServiceOptions *options; // @dynamic options;
@property(retain, nonatomic) NSMutableArray *streamArray; // @dynamic streamArray;
@property(readonly, nonatomic) unsigned long long streamArray_Count; // @dynamic streamArray_Count;

@end

