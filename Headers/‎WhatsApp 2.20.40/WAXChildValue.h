//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAXValue.h>

#import <Core/NSCopying-Protocol.h>

@class WAXStanzaElement;

@interface WAXChildValue : WAXValue <NSCopying>
{
    WAXStanzaElement *_element;
}

@property(retain, nonatomic) WAXStanzaElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (id)unredactedDescription;
- (id)redactedDescription;
- (CDUnknownBlockType)validate;
- (unsigned long long)role;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElement:(id)arg1;

@end

