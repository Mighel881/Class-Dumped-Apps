//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AWEMediaDownloadFeedbackRecorderParserItem : NSObject
{
    NSString *_name;
    long long _count;
    NSMutableArray *_errorCodeArray;
    NSMutableArray *_messageArray;
}

@property(retain, nonatomic) NSMutableArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) NSMutableArray *errorCodeArray; // @synthesize errorCodeArray=_errorCodeArray;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
