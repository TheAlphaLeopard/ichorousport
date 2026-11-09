// gml_Script____struct___114 @ 0x1402e39c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script____struct___114(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  double **ppdVar9;
  ulonglong uVar10;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  double local_1a0;
  uint local_194;
  double local_190;
  byte local_184;
  undefined1 local_180 [12];
  byte local_174;
  undefined1 local_170 [12];
  byte local_164;
  double *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_1b0 = "gml_Script_settings_save";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x33;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_190,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  pdVar2 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_2c = 0xffffff;
  local_38 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef0e8);
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0.0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x34;
  uStack_1dc = 0xf;
  local_1e8 = 0x100000000000058;
  local_1d8 = 0x58;
  uStack_1d4 = 0x1000000;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = 0xf;
  if ((1 << (local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_1d8);
  local_160 = &local_190;
  ppdVar9 = &local_160;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar7,ppdVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_1a8 = 0x35;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar10 = (ulonglong)ppdVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419ef168,0x80000000,&local_a8,uVar7,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_9c;
    uStack_1e0 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_a8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_a8);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_38);
    }
    FUN_140041b80(&local_38,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_1419ef168,0x80000000,&local_38);
    local_1a8 = 0x36;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419ef6b8,0x80000000,&local_b8,uVar7,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_ac;
    uStack_1e0 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_b8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_b8);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_1419ef6b8,0x80000000,&local_48);
    local_1a8 = 0x37;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419ef718,0x80000000,&local_c8,uVar7,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_bc;
    uStack_1e0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_c8);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_1419ef718,0x80000000,&local_58);
    local_1a8 = 0x38;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419ef548,0x80000000,&local_d8,uVar7,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_cc;
    uStack_1e0 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_d8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_d8);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_1419ef548,0x80000000,&local_68);
    local_1a8 = 0x39;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419ef4f8,0x80000000,&local_e8,uVar7,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_dc;
    uStack_1e0 = local_e0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_e8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_e8);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_1419ef4f8,0x80000000,&local_78);
    local_1a8 = 0x3a;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a0a758,0x80000000,&local_f8,uVar7,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_ec;
    uStack_1e0 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_f8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_f8);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_141a0a758,0x80000000,&local_88);
    local_1a8 = 0x3b;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    FUN_140e87440(&local_1e8,DAT_1419ef378,0x80000000,&local_108,uVar7 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = local_fc;
    uStack_1e0 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_108;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_108);
    }
    uVar8 = uStack_1dc;
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_1d8);
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87930(pdVar2,DAT_1419ef378,0x80000000,&local_98);
  }
  local_1a8 = 0x3d;
  if (puVar3 != &local_118) {
    local_1d8 = *(undefined4 *)puVar3;
    uStack_1d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
  }
  FUN_140e87930(pdVar2,DAT_1419ef0e8,0x80000000,&local_118);
  local_1a8 = 0x3e;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar8 = 0;
  puVar3 = (undefined8 *)gml_Script_WindowSetMode(param_1,param_2,&local_1c8,0,0);
  if (puVar3 != &local_128) {
    local_1d8 = *(undefined4 *)puVar3;
    uStack_1d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1d8);
  }
  FUN_140e87930(pdVar2,DAT_141a57fe0,0x80000000,&local_128);
  local_1a8 = 0x3f;
  if (puVar4 != &local_138) {
    local_1d8 = *(undefined4 *)puVar4;
    uStack_1d4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1d0 = *(undefined4 *)(puVar4 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1d8);
  }
  FUN_140e87930(pdVar2,DAT_1419ef528,0x80000000,&local_138);
  local_1a8 = 0x41;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if (pdVar2 != &local_190) {
    local_1d8 = *(undefined4 *)pdVar2;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar2 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar2 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar2 + 0xc);
    if ((1 << (local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_1d8);
  }
  local_160 = &local_190;
  local_1d8 = _DAT_1419df7c0;
  uStack_1d4 = uRam00000001419df7c4;
  uStack_1d0 = uRam00000001419df7c8;
  uStack_1cc = uRam00000001419df7cc;
  if ((1 << (local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_180);
  }
  FUN_140041b80(local_180,&local_1d8);
  local_158 = local_180;
  uVar5 = CONCAT44(uVar8,DAT_1419ef1c8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar5,&local_160);
  uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != &local_148) {
    local_1d8 = *(undefined4 *)puVar3;
    uStack_1d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  local_1a8 = 0x42;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_1d8 = _DAT_1419e3c30;
  uStack_1d4 = uRam00000001419e3c34;
  uStack_1d0 = uRam00000001419e3c38;
  uStack_1cc = uRam00000001419e3c3c;
  if ((1 << (local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_1d8);
  local_160 = &local_190;
  local_1d8 = _DAT_1419e3c30;
  uStack_1d4 = uRam00000001419e3c34;
  uStack_1d0 = uRam00000001419e3c38;
  uStack_1cc = uRam00000001419e3c3c;
  if ((1 << (local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_180);
  }
  FUN_140041b80(local_180,&local_1d8);
  local_158 = local_180;
  local_1d8 = _DAT_1419e3bc0;
  uStack_1d4 = uRam00000001419e3bc4;
  uStack_1d0 = uRam00000001419e3bc8;
  uStack_1cc = uRam00000001419e3bcc;
  if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_170);
  }
  FUN_140041b80(local_170,&local_1d8);
  local_150 = local_170;
  uVar5 = CONCAT44(uVar8,DAT_141a0a588);
  pdVar2 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar5,&local_160);
  uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar2 != &local_1a0) {
    local_1d8 = *(undefined4 *)pdVar2;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar2 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar2 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar2 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_1d8);
  }
  local_1a8 = 0x43;
  dVar6 = local_1a0;
  if ((local_194 & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_1a0);
  }
  FUN_140ececc0((longlong)dVar6,0xb,&local_148);
  local_1a8 = 0x44;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_160 = &local_1a0;
  local_1d8 = _DAT_141dcf138;
  uStack_1d4 = uRam0000000141dcf13c;
  uStack_1d0 = uRam0000000141dcf140;
  uStack_1cc = DAT_141dcf144;
  if ((1 << (local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_180);
  }
  FUN_140041b80(local_180,&local_1d8);
  local_158 = local_180;
  uVar5 = CONCAT44(uVar8,DAT_1419ef218);
  FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar5,&local_160);
  uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_1a8 = 0x45;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_160 = &local_1a0;
  FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar8,DAT_1419ef3b8),&local_160);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_190,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

