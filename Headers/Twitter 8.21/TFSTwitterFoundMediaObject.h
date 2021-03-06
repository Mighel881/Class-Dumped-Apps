//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/NSCopying-Protocol.h>
#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSString, TFSTwitterFoundMediaGroup, TFSTwitterFoundMediaImage;

@interface TFSTwitterFoundMediaObject : NSObject <NSCopying, NSCoding, TFSModel>
{
    NSString *_identifier;
    TFSTwitterFoundMediaImage *_primaryImage;
    TFSTwitterFoundMediaGroup *_parentGroup;
    NSString *_altText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *altText; // @synthesize altText=_altText;
@property(readonly, nonatomic) TFSTwitterFoundMediaGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(readonly, nonatomic) TFSTwitterFoundMediaImage *primaryImage; // @synthesize primaryImage=_primaryImage;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 primaryImage:(id)arg2 altText:(id)arg3 parentGroup:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

