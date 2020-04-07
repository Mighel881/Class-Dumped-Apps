//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSCopying-Protocol.h>
#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PSPDFWord : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stringValue;
    NSArray *_glyphs;
    _Bool _lineBreaker;
    struct _NSRange _range;
    struct CGRect _frame;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool lineBreaker; // @synthesize lineBreaker=_lineBreaker;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *stringValue;
- (id)glyphs;
- (void)setGlyphs:(id)arg1;
- (id)description;
- (_Bool)isEqualToWord:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRange:(struct _NSRange)arg1 text:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithGlyphs:(id)arg1 frame:(struct CGRect)arg2;
- (id)init;

@end
