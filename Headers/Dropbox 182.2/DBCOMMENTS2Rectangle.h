//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBCOMMENTS2Rectangle : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_page;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(readonly, nonatomic) NSNumber *x; // @synthesize x=_x;
@property(readonly, nonatomic) NSNumber *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqualToRectangle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPage:(id)arg1 x:(id)arg2 y:(id)arg3 width:(id)arg4 height:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
