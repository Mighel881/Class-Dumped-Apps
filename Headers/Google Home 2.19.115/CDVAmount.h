//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDVMoney;

@interface CDVAmount : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPretax; // @dynamic hasPretax;
@property(nonatomic) _Bool hasTotal; // @dynamic hasTotal;
@property(retain, nonatomic) CDVMoney *pretax; // @dynamic pretax;
@property(retain, nonatomic) CDVMoney *total; // @dynamic total;

@end

