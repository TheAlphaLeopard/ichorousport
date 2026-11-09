// gml_Script_bg_damage_flash @ 0x140231530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_bg_damage_flash
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_130 = "gml_Script_BeginPull";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 1;
  FUN_140041df0(local_48,param_4,3,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 1;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_128 = 1;
    if ((int)local_48[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x403e000000000000;
  }
  if ((int)local_48[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_40[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_15c = 0xd;
    local_168 = 0;
    if ((int)local_48[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_40[1];
      if (&local_168 == puVar4) goto LAB_140231739;
    }
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = uStack_160;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_178);
  }
LAB_140231739:
  if ((int)local_48[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_40[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_48[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &DAT_bff0000000000000;
  }
  local_128 = 3;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_15c = 0xf;
  local_168 = 0x10000000000001b;
  local_178 = 0x1b;
  uStack_174 = 0x1000000;
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_178);
  local_68 = local_d8;
  ppuVar9 = &local_68;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_128 = 3;
    goto LAB_140231d49;
  }
  local_128 = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_15c = 6;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_78,uVar7,uVar10);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_88,uVar7,uVar10);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a1b910,0x80000000,&local_98,uVar7,uVar10 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_178 = (undefined4)local_78;
  uStack_174 = local_78._4_4_;
  uStack_170 = uStack_70;
  uStack_16c = uStack_6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_178);
  local_68 = local_d8;
  local_178 = (undefined4)local_88;
  uStack_174 = local_88._4_4_;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_178);
  local_60 = &local_c8;
  local_178 = (undefined4)local_98;
  uStack_174 = local_98._4_4_;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_178);
  local_58 = local_b8;
  uStack_15c = 0xf;
  local_168 = 0x10000000000001b;
  local_178 = 0x1b;
  uStack_174 = 0x1000000;
  uStack_170 = uStack_160;
  uStack_16c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_178);
  local_50 = local_a8;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,4,CONCAT44(uVar8,DAT_141a0a7c8),&local_68);
  if (puVar4 != &local_148) {
    local_178 = *(undefined4 *)puVar4;
    uStack_174 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_128 = 6;
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140231b0a:
    local_178 = *(undefined4 *)puVar4;
    uStack_174 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_178);
  }
  else {
    puVar4 = (undefined8 *)*local_40;
    if (puVar4 != &local_f0) goto LAB_140231b0a;
  }
  FUN_140e87930(&local_148,DAT_141a1b9e0,0x80000000,&local_f0);
  local_128 = 7;
  if ((int)local_48[0] < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140231b72:
    local_178 = *(undefined4 *)puVar4;
    uStack_174 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_178);
  }
  else {
    puVar4 = (undefined8 *)local_40[1];
    if (puVar4 != &local_100) goto LAB_140231b72;
  }
  FUN_140e87930(&local_148,DAT_141a1b980,0x80000000,&local_100);
  local_128 = 8;
  if ((int)local_48[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_140231bda:
    local_178 = *(undefined4 *)puVar4;
    uStack_174 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_178);
  }
  else {
    puVar4 = (undefined8 *)local_40[2];
    if (puVar4 != &local_110) goto LAB_140231bda;
  }
  FUN_140e87930(&local_148,DAT_141a1b950,0x80000000,&local_110);
  local_128 = 9;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_178 = _DAT_1419e3740;
  uStack_174 = uRam00000001419e3744;
  uStack_170 = uRam00000001419e3748;
  uStack_16c = uRam00000001419e374c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_178);
  local_68 = local_d8;
  if (((int)local_48[0] < 3) || (puVar5 = (undefined8 *)local_40[2], puVar5 != &local_c8)) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_178);
  }
  local_60 = &local_c8;
  puVar5 = (undefined8 *)FUN_140e79090(&local_158,2,&local_68);
  if (puVar5 != &local_120) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_178);
  }
  FUN_140e87930(&local_148,DAT_141a1b750,0x80000000,&local_120);
LAB_140231d49:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
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
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar5 = local_40;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

