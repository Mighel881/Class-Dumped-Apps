//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsPostCollection : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _titleIsSet;
    _Bool _author_idIsSet;
    _Bool _post_idsIsSet;
    _Bool _display_layoutIsSet;
    NSString *_id;
    NSString *_title;
    NSString *_author_id;
    NSMutableArray *_post_ids;
    NSString *_display_layout;
}

@property(nonatomic) _Bool display_layoutIsSet; // @synthesize display_layoutIsSet=_display_layoutIsSet;
@property(copy, nonatomic) NSString *display_layout; // @synthesize display_layout=_display_layout;
@property(nonatomic) _Bool post_idsIsSet; // @synthesize post_idsIsSet=_post_idsIsSet;
@property(retain, nonatomic) NSMutableArray *post_ids; // @synthesize post_ids=_post_ids;
@property(nonatomic) _Bool author_idIsSet; // @synthesize author_idIsSet=_author_idIsSet;
@property(copy, nonatomic) NSString *author_id; // @synthesize author_id=_author_id;
@property(nonatomic) _Bool titleIsSet; // @synthesize titleIsSet=_titleIsSet;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetDisplay_layout;
- (void)unsetPost_ids;
- (void)unsetAuthor_id;
- (void)unsetTitle;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 title:(id)arg2 author_id:(id)arg3 post_ids:(id)arg4 display_layout:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

