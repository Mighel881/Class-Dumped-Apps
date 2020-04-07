//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBPROMPTPanel : NSObject <DBSerializable, NSCopying>
{
    NSString *_textHtml;
    NSString *_imageUrl;
    NSString *_imageUrlHiRes;
    NSString *_confirmText;
    NSString *_confirmUrl;
    NSNumber *_confirmInNewTab;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *confirmInNewTab; // @synthesize confirmInNewTab=_confirmInNewTab;
@property(readonly, copy, nonatomic) NSString *confirmUrl; // @synthesize confirmUrl=_confirmUrl;
@property(readonly, copy, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(readonly, copy, nonatomic) NSString *imageUrlHiRes; // @synthesize imageUrlHiRes=_imageUrlHiRes;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSString *textHtml; // @synthesize textHtml=_textHtml;
- (void).cxx_destruct;
- (_Bool)isEqualToPanel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTextHtml:(id)arg1 confirmText:(id)arg2 confirmUrl:(id)arg3;
- (id)initWithTextHtml:(id)arg1 confirmText:(id)arg2 confirmUrl:(id)arg3 imageUrl:(id)arg4 imageUrlHiRes:(id)arg5 confirmInNewTab:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
