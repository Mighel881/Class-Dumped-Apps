//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface GIMRtpSimulcastStream : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *layerArray; // @dynamic layerArray;
@property(readonly, nonatomic) unsigned long long layerArray_Count; // @dynamic layerArray_Count;
@property(retain, nonatomic) NSMutableArray *rtpStreamIdArray; // @dynamic rtpStreamIdArray;
@property(readonly, nonatomic) unsigned long long rtpStreamIdArray_Count; // @dynamic rtpStreamIdArray_Count;

@end

