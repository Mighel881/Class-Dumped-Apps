//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPIMomentsCommandWithResponseModelBuilder.h>

@class NSArray;

@interface TFSTwitterAPIMomentsSportsScoresCommand : TFSTwitterAPIMomentsCommandWithResponseModelBuilder
{
    NSArray *_eventIDs;
}

@property(retain, nonatomic) NSArray *eventIDs; // @synthesize eventIDs=_eventIDs;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 eventIDs:(id)arg3 source:(unsigned long long)arg4 responseModelBuilder:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

