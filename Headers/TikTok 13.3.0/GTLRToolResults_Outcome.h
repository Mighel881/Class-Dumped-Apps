//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRToolResults_FailureDetail, GTLRToolResults_InconclusiveDetail, GTLRToolResults_SkippedDetail, GTLRToolResults_SuccessDetail, NSString;

@interface GTLRToolResults_Outcome : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRToolResults_FailureDetail *failureDetail; // @dynamic failureDetail;
@property(retain, nonatomic) GTLRToolResults_InconclusiveDetail *inconclusiveDetail; // @dynamic inconclusiveDetail;
@property(retain, nonatomic) GTLRToolResults_SkippedDetail *skippedDetail; // @dynamic skippedDetail;
@property(retain, nonatomic) GTLRToolResults_SuccessDetail *successDetail; // @dynamic successDetail;
@property(copy, nonatomic) NSString *summary; // @dynamic summary;
@end
