//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTHAFrontendObjectReference, NSMutableArray, NSString;

@interface ASTHAFrontendObjectResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTargetObject; // @dynamic hasTargetObject;
@property(retain, nonatomic) NSMutableArray *responseParametersArray; // @dynamic responseParametersArray;
@property(readonly, nonatomic) unsigned long long responseParametersArray_Count; // @dynamic responseParametersArray_Count;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) ASTHAFrontendObjectReference *targetObject; // @dynamic targetObject;

@end

