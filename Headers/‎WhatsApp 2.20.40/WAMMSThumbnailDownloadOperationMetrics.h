//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WAMMSThumbnailDownloadOperationMetrics : NSObject
{
    NSDate *_scheduledDate;
    double _decryptStartTime;
}

@property(nonatomic) double decryptStartTime; // @synthesize decryptStartTime=_decryptStartTime;
@property(retain, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
- (void).cxx_destruct;

@end

