//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ZegoMixStreamOutputResult : NSObject
{
    NSString *_streamID;
    NSMutableArray *_rtmpList;
    NSMutableArray *_hlsList;
    NSMutableArray *_flvList;
}

@property(retain, nonatomic) NSMutableArray *flvList; // @synthesize flvList=_flvList;
@property(retain, nonatomic) NSMutableArray *hlsList; // @synthesize hlsList=_hlsList;
@property(retain, nonatomic) NSMutableArray *rtmpList; // @synthesize rtmpList=_rtmpList;
@property(copy, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
- (void).cxx_destruct;
- (id)init;

@end
