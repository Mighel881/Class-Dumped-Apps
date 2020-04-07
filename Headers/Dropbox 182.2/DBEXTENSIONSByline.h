//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBEXTENSIONSExtensionId, NSArray, NSString;

@interface DBEXTENSIONSByline : NSObject <DBSerializable, NSCopying>
{
    DBEXTENSIONSExtensionId *_extensionId;
    NSArray *_byline;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSArray *byline; // @synthesize byline=_byline;
@property(readonly, nonatomic) DBEXTENSIONSExtensionId *extensionId; // @synthesize extensionId=_extensionId;
- (void).cxx_destruct;
- (_Bool)isEqualToByline:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithExtensionId:(id)arg1 byline:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
