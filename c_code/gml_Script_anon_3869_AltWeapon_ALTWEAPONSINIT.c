// gml_Script_anon_3869_AltWeapon_ALTWEAPONSINIT @ 0x140216350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3869_AltWeapon_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 **local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  
  local_1b0 = "gml_Script_anon@2974@ThrowAnimQueue@ALTWEAPONSINIT";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x70;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_128,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_21c = 0xffffff;
  local_228 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_20c = 0;
  local_218 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_134 = 0;
  local_140 = 0;
  local_144 = 0;
  local_150 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x71;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
  if (puVar4 != &local_118) {
    local_238 = *puVar4;
    uStack_230 = *(undefined4 *)(puVar4 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_238);
  }
  local_a0 = &local_118;
  ppuVar10 = &local_a0;
  uVar8 = CONCAT44(uVar9,DAT_141a0a9e8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,1,uVar8,ppuVar10);
  if (puVar4 != &local_228) {
    local_238 = *puVar4;
    uStack_230 = *(undefined4 *)(puVar4 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_238);
  }
  local_1a8 = 0x72;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab08);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a0a9f8,0x80000000,&local_1c8,uVar8,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  local_238 = local_1c8;
  uStack_230 = uStack_1c0;
  uStack_22c = uStack_1bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_238);
  local_a8 = local_128;
  local_238 = CONCAT44(uRam00000001419e36c4,_DAT_1419e36c0);
  uStack_230 = uRam00000001419e36c8;
  uStack_22c = uRam00000001419e36cc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_238);
  local_a0 = &local_118;
  ppuVar11 = &local_a8;
  uVar8 = CONCAT44(uVar9,DAT_141a049b8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar8,ppuVar11);
  uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_240 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_248,puVar4);
  }
  FUN_1400462a0(&local_248,uVar5);
  local_238 = local_248;
  uStack_230 = uStack_240;
  uStack_22c = uStack_23c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_98 = local_108;
  puVar4 = (undefined8 *)FUN_140e79090(&local_218,2,&local_a0);
  if (puVar4 != &local_170) {
    local_238 = *puVar4;
    uStack_230 = *(undefined4 *)(puVar4 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_238);
  }
  FUN_140e87930(&local_228,DAT_141a0a998,0x80000000,&local_170);
  local_1a8 = 0x73;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a8b8);
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a0a998,0x80000000,&local_180,uVar8,uVar12);
  FUN_140e87440(&local_228,DAT_141a0a9f8,0x80000000,&local_1c8,uVar8 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  local_238 = local_1c8;
  uStack_230 = uStack_1c0;
  uStack_22c = uStack_1bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_238);
  local_a8 = local_128;
  ppuVar11 = &local_a8;
  uVar5 = FUN_140e63610(param_1,param_2,&local_218,1,uVar6,ppuVar11);
  uStack_23c = local_174;
  uStack_240 = local_178;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
    local_248 = local_180;
  }
  else {
    FUN_1400419b0(&local_248,&local_180);
  }
  FUN_140046500(&local_248,uVar5);
  local_238 = local_248;
  uStack_230 = uStack_240;
  uStack_22c = uStack_23c;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1a8 = 0x75;
  uVar8 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a0aa38,0x80000000,&local_1d8,uVar6,uVar8);
  puVar4 = &DAT_1419df7b0;
  iVar3 = FUN_140e851f0(&local_1d8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_23c = local_1ec;
    uStack_240 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_248 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_248,&local_1f8);
    }
    puVar7 = &local_248;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    local_68 = &local_140;
    local_60 = &local_150;
    local_58 = &local_228;
    local_50 = &local_1d8;
    local_48 = &local_a8;
    local_40 = &local_1f8;
    local_38 = local_128;
    puVar7 = (undefined8 *)FUN_140217030(&local_68,&local_238);
    bVar2 = false;
    bVar1 = true;
    if (puVar7 == &local_190) goto LAB_140216a2b;
  }
  local_1e8 = *(undefined4 *)puVar7;
  uStack_1e4 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_1e0 = *(undefined4 *)(puVar7 + 1);
  uStack_1dc = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_1e8);
LAB_140216a2b:
  if (bVar1) {
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
  }
  if (bVar2) {
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
  }
  FUN_140e87930(&local_228,DAT_141a0a948,0x80000000,&local_190);
  local_1a8 = 0x76;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a0aa38,0x80000000,&local_1d8,uVar6,uVar8);
  iVar3 = FUN_140e851f0(&local_1d8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_22c = local_1ec;
    uStack_230 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_238 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_238,&local_1f8);
    }
    puVar7 = &local_238;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_228,DAT_141a0aa38,0x80000000,&local_1d8,uVar6,uVar8);
    local_1e8 = _DAT_1419e36c0;
    uStack_1e4 = uRam00000001419e36c4;
    uStack_1e0 = uRam00000001419e36c8;
    uStack_1dc = uRam00000001419e36cc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1e8);
    local_98 = local_108;
    local_1e8 = (undefined4)local_1d8;
    uStack_1e4 = local_1d8._4_4_;
    uStack_1e0 = uStack_1d0;
    uStack_1dc = uStack_1cc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1e8);
    local_90 = local_f8;
    puVar7 = (undefined8 *)FUN_140e79090(&local_208,2,&local_98);
    uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_240 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_248 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_248,puVar7);
    }
    puVar7 = &local_248;
    bVar2 = false;
    bVar1 = true;
  }
  local_1e8 = *(undefined4 *)puVar7;
  uStack_1e4 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_1e0 = *(undefined4 *)(puVar7 + 1);
  uStack_1dc = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  FUN_140041b80(&local_160,&local_1e8);
  if (bVar1) {
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_238);
  }
  FUN_140e87930(&local_228,DAT_141a0a938,0x80000000,&local_160);
  local_1a8 = 0x77;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_1a0)) {
    local_1e8 = *(undefined4 *)puVar4;
    uStack_1e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1e0 = *(undefined4 *)(puVar4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_1e8);
  }
  FUN_140e87930(&local_228,DAT_141a0a978,0x80000000,&local_1a0);
  local_1a8 = 0x79;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab18);
  FUN_140e609c0(param_1);
  if (&local_228 != puVar4) {
    local_1e8 = (undefined4)local_228;
    uStack_1e4 = local_228._4_4_;
    uStack_1e0 = uStack_220;
    uStack_1dc = uStack_21c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1e8);
  }
  FUN_140e60910(1);
  local_1a8 = 0x7a;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e87440(&local_228,DAT_141a0a9f8,0x80000000,&local_1c8,uVar6 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_1c8 != puVar4) {
    local_1e8 = (undefined4)local_1c8;
    uStack_1e4 = local_1c8._4_4_;
    uStack_1e0 = uStack_1c0;
    uStack_1dc = uStack_1bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1e8);
  }
  FUN_140e60910(1);
  local_1a8 = 0x7b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_1a8 = 0x7c;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
  if (puVar4 != &DAT_141dcdd48) {
    local_1e8 = (undefined4)DAT_141dcdd48;
    uStack_1e4 = DAT_141dcdd48._4_4_;
    uStack_1e0 = DAT_141dcdd50;
    uStack_1dc = DAT_141dcdd54;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1e8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

