//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _TtC10ProtonMail10HeaderData;

@interface _TtC10ProtonMail16MessageViewModel : NSObject
{
    // Error parsing type: , name: messageID
    // Error parsing type: , name: body
    // Error parsing type: , name: header
    // Error parsing type: , name: attachments
    // Error parsing type: , name: expiration
    // Error parsing type: , name: heightOfHeader
    // Error parsing type: , name: heightOfBody
    // Error parsing type: , name: heightOfAttachments
    // Error parsing type: , name: divisionsCount
    // Error parsing type: , name: divisions
    // Error parsing type: , name: remoteContentModeObservable
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long remoteContentModeObservable; // @synthesize remoteContentModeObservable;
@property(nonatomic) long long divisionsCount; // @synthesize divisionsCount;
@property(nonatomic) double heightOfAttachments; // @synthesize heightOfAttachments;
@property(nonatomic) double heightOfBody; // @synthesize heightOfBody;
@property(nonatomic) double heightOfHeader; // @synthesize heightOfHeader;
@property(nonatomic, copy) NSArray *attachments;
@property(nonatomic, retain) _TtC10ProtonMail10HeaderData *header; // @synthesize header;
@property(nonatomic, copy) NSString *body;

@end
