//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZegoStream : NSObject
{
    int _streamNID;
    NSString *_userID;
    NSString *_userName;
    NSString *_streamID;
    NSString *_extraInfo;
}

@property(nonatomic) int streamNID; // @synthesize streamNID=_streamNID;
@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

@end
