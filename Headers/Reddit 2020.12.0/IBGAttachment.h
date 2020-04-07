//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGCachable-Protocol.h>

@class NSDictionary, NSString;

@interface IBGAttachment : NSObject <IBGCachable>
{
    _Bool _isSent;
    id _attachment;
    NSDictionary *_metadata;
    NSString *_byline;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) id attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)save;
- (void)send;
- (_Bool)isFullySent;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (void)fetchAttachmentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)coderNameForSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end
