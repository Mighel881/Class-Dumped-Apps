//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CDROSOrderReturnInfoModule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *details; // @dynamic details;
@property(retain, nonatomic) NSMutableArray *infoItemArray; // @dynamic infoItemArray;
@property(readonly, nonatomic) unsigned long long infoItemArray_Count; // @dynamic infoItemArray_Count;
@property(retain, nonatomic) NSMutableArray *lineItemArray; // @dynamic lineItemArray;
@property(readonly, nonatomic) unsigned long long lineItemArray_Count; // @dynamic lineItemArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

