// gml_Script___scribble_font_add_from_info @ 0x14017ae80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_font_add_from_info
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double dVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  double local_170;
  uint local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined1 local_38 [12];
  byte local_2c;
  
  local_180 = "gml_Script___scribble_font_add_from_bundle";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 5;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_164 = 0xffffff;
  local_170 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddd108) &&
     (_Init_thread_header(&DAT_141ddd108), DAT_141ddd108 == -1)) {
    DAT_141ddd100 = (longlong *)FUN_140e63aa0(DAT_141a086d8);
    _Init_thread_footer(&DAT_141ddd108);
  }
  if (DAT_141ddc08c == '\0') {
    FUN_140e64380(DAT_141ddd100,"gml_Script___scribble_font_add_from_bundle");
    FUN_140e64380(param_1,"gml_Script___scribble_font_add_from_bundle");
  }
  local_178 = 7;
  if (DAT_141ddc08c == '\0') {
    DAT_141ddc08c = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddd100 + 0x10))(DAT_141ddd100,DAT_141a08718);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_198 = (undefined4)DAT_1419df7b0;
    uStack_194 = DAT_1419df7b0._4_4_;
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_198);
    local_d8 = &local_88;
    ppuVar8 = &local_d8;
    uVar2 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_1a8,1,&local_d8);
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a08728,0x80000000,&local_a8,uVar9,
                  in_stack_fffffffffffffe50 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar9 >> 0x20);
    FUN_140e609c0(DAT_141ddd100);
    if (&local_a8 != puVar1) {
      local_198 = (undefined4)local_a8;
      uStack_194 = local_a8._4_4_;
      uStack_190 = uStack_a0;
      uStack_18c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_198);
    }
    FUN_140e60910(1);
  }
  local_178 = 9;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_160 = 0;
  local_158 = 0;
  local_154 = 5;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141ddd100 + 8))(DAT_141ddd100,DAT_141a08718);
  pdVar6 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14017b1c3:
    local_198 = *(undefined4 *)puVar5;
    uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_198);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_98) goto LAB_14017b1c3;
  }
  local_e0 = &local_98;
  if (puVar1 != &local_88) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_198);
  }
  local_d8 = &local_88;
  uVar2 = CONCAT44(uVar10,DAT_1419fee48);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_160,1,uVar2,&local_e0);
  uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar3 != local_78) {
    local_198 = *puVar3;
    uStack_194 = puVar3[1];
    uStack_190 = puVar3[2];
    uStack_18c = puVar3[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_198);
  }
  local_d0 = (undefined8 *)local_78;
  uVar2 = CONCAT44(uVar10,DAT_1419ff4f8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar2,&local_d8);
  uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_f0) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_198);
  }
  local_178 = 0xb;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_14017b343:
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_198);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_98) goto LAB_14017b343;
  }
  local_e0 = &local_98;
  uVar2 = CONCAT44(uVar10,DAT_141a08608);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar2,&local_e0);
  uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_150) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_198);
  }
  local_178 = 0xc;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_e0 = &local_150;
  uVar2 = CONCAT44(uVar10,DAT_141a086f8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar2,&local_e0);
  uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_100) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_198);
  }
  local_178 = 0xd;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_e0 = &local_100;
  uVar2 = CONCAT44(uVar10,DAT_141a045e8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar2,&local_e0);
  uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_110) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_198);
  }
  local_178 = 0xe;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_14017b548:
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_198);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_98) goto LAB_14017b548;
  }
  local_e0 = &local_98;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1a8,1,CONCAT44(uVar10,DAT_141a086e8),&local_e0);
  if (puVar1 != &local_120) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_198);
  }
  local_178 = 0xf;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_98) goto LAB_14017b64e;
  }
  local_198 = *(undefined4 *)puVar1;
  uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_190 = *(undefined4 *)(puVar1 + 1);
  uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_198);
LAB_14017b64e:
  local_e0 = &local_98;
  local_198 = _DAT_1419e1f20;
  uStack_194 = uRam00000001419e1f24;
  uStack_190 = uRam00000001419e1f28;
  uStack_18c = uRam00000001419e1f2c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_198);
  local_d8 = &local_88;
  ppuVar8 = &local_e0;
  puVar1 = (undefined8 *)
           gml_Script___scribble_buffer_peek_unicode(param_1,param_2,&local_1a8,2,ppuVar8);
  uVar10 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  if (puVar1 != &local_130) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_198);
  }
  local_178 = 0x11;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar2 = CONCAT44(uVar10,DAT_141a04ae8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1a8,0,uVar2,0);
  uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (pdVar4 != &local_170) {
    local_198 = *(undefined4 *)pdVar4;
    uStack_194 = *(undefined4 *)((longlong)pdVar4 + 4);
    uStack_190 = *(undefined4 *)(pdVar4 + 1);
    uStack_18c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_198);
  }
  local_178 = 0x12;
  if (0 < param_4) {
    pdVar6 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar6;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar6);
  }
  thunk_FUN_141039cb0((longlong)dVar7);
  local_178 = 0x13;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_198 = _DAT_141dcbb38;
  uStack_194 = uRam0000000141dcbb3c;
  uStack_190 = uRam0000000141dcbb40;
  uStack_18c = DAT_141dcbb44;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_198);
  local_e0 = &local_98;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1a8,1,CONCAT44(uVar10,DAT_141a04458),&local_e0);
  if (puVar1 != &local_140) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_198);
  }
  local_178 = 0x14;
  dVar7 = local_170;
  if ((local_164 & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_170);
  }
  thunk_FUN_141039cb0((longlong)dVar7);
  local_178 = 0x16;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_e0 = &local_150;
  local_d8 = &local_f0;
  local_d0 = &local_110;
  local_c8 = &local_120;
  local_c0 = &local_140;
  local_b8 = &local_130;
  local_198 = _DAT_1419df7c0;
  uStack_194 = uRam00000001419df7c4;
  uStack_190 = uRam00000001419df7c8;
  uStack_18c = uRam00000001419df7cc;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_38);
  }
  FUN_140041b80(local_38,&local_198);
  local_b0 = local_38;
  puVar1 = (undefined8 *)
           gml_Script___scribble_font_add_sprite(param_1,param_2,&local_1a8,7,&local_e0);
  if (puVar1 != param_3) {
    local_198 = *(undefined4 *)puVar1;
    uStack_194 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_198);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

