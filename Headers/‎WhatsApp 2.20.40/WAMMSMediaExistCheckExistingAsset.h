//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WAMediaKey;

@interface WAMMSMediaExistCheckExistingAsset : NSObject
{
    NSData *_encHash;
    WAMediaKey *_mediaKey;
    NSData *_plaintextHash;
    NSData *_sidecar;
}

@property(readonly, nonatomic) NSData *sidecar; // @synthesize sidecar=_sidecar;
@property(readonly, nonatomic) NSData *plaintextHash; // @synthesize plaintextHash=_plaintextHash;
@property(readonly, nonatomic) WAMediaKey *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, nonatomic) NSData *encHash; // @synthesize encHash=_encHash;
- (void).cxx_destruct;
- (id)initWithEncHash:(id)arg1 mediaKey:(id)arg2 plaintextHash:(id)arg3 sidecar:(id)arg4;

@end

