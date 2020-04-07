//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@interface TGInputTextTag : NSTextAttachment
{
    _Bool _left;
    long long _uniqueId;
    id _attachment;
}

@property(readonly, nonatomic) id attachment; // @synthesize attachment=_attachment;
@property(readonly, nonatomic) _Bool left; // @synthesize left=_left;
@property(readonly, nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)textAttachment;
- (id)initWithUniqueId:(long long)arg1 left:(_Bool)arg2 attachment:(id)arg3;

@end
