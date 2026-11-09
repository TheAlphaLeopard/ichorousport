// gml_Script_anon_588_gml_Object_oDescriptionBubble_Create_0 @ 0x1408f1d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_588_gml_Object_oDescriptionBubble_Create_0
               (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double local_160;
  undefined4 local_154;
  double local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_170 = "gml_Object_oDebugSpawnBlood_Step_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  bVar4 = 0xff;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_168 = 1;
  FUN_140e85f80(param_1,DAT_1419eece8,0x80000000,&local_c8);
  local_1d8 = local_c8;
  uStack_1d0 = uStack_c0;
  uStack_1cc = uStack_bc;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_1d8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_120);
  local_168 = 2;
  FUN_140e85f80(param_1,DAT_1419eecd8,0x80000000,&local_d8);
  local_1d8 = local_d8;
  uStack_1d0 = uStack_d0;
  uStack_1cc = uStack_cc;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_1d8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_130);
  local_168 = 4;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_1d8 = CONCAT44(uRam00000001419e9e44,_DAT_1419e9e40);
  uStack_1d0 = uRam00000001419e9e48;
  uStack_1cc = uRam00000001419e9e4c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1d8);
  local_58 = local_a8;
  ppuVar10 = &local_58;
  uVar8 = CONCAT44(uVar9,DAT_141a44e08);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_168 = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_1cc = 6;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_e8,uVar8,uVar11);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_f8,uVar8,uVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = local_e8;
    uStack_1d0 = uStack_e0;
    uStack_1cc = uStack_dc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1d8);
    local_50 = local_98;
    local_1d8 = local_f8;
    uStack_1d0 = uStack_f0;
    uStack_1cc = uStack_ec;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1d8);
    local_48 = local_88;
    local_1d8 = CONCAT44(uRam0000000141dd7aec,_DAT_141dd7ae8);
    uStack_1d0 = uRam0000000141dd7af0;
    uStack_1cc = DAT_141dd7af4;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_1d8);
    local_40 = local_78;
    uStack_1cc = 0xf;
    local_1d8 = 0x10000000000000f;
    local_b8 = 0xf;
    uStack_b4 = 0x1000000;
    uStack_b0 = uStack_1d0;
    uStack_ac = 0xf;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_b8);
    local_38 = local_68;
    ppuVar10 = &local_50;
    uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,4,uVar8,ppuVar10);
    if (puVar3 != &local_1b8) {
      local_b8 = *(undefined4 *)puVar3;
      uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_b0 = *(undefined4 *)(puVar3 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_b8);
    }
    local_168 = 6;
    local_108 = FUN_140e78f00(0x168);
    bVar4 = 0;
    uStack_fc = 0;
    local_168 = 7;
    dVar6 = (double)FUN_140e794b0(0,0x4008000000000000);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1bc = 0;
    local_168 = 8;
    local_b8 = (undefined4)local_108;
    uStack_b4 = local_108._4_4_;
    uStack_b0 = uStack_100;
    uStack_ac = uStack_fc;
    local_1c8 = dVar6;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_b8);
    FUN_140e87930(&local_1b8,DAT_141a1eed0,0x80000000,&local_140);
    local_168 = 10;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_141a1eed0,0x80000000,&local_1a8,uVar8,uVar11);
    dVar6 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_1a8);
    }
    dVar7 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_1c8);
    }
    fVar5 = (float)FUN_140e78f90((float)dVar7,(float)dVar6);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    local_144 = 0;
    local_150 = (double)fVar5;
    FUN_140e87930(&local_1b8,DAT_141a1f230,0x80000000,&local_150);
    local_168 = 0xb;
    FUN_140e87440(&local_1b8,DAT_141a1eed0,0x80000000,&local_1a8,uVar8 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    dVar6 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_1a8);
    }
    dVar7 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_1c8);
    }
    fVar5 = (float)FUN_140e79010((float)dVar7,(float)dVar6);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    local_154 = 0;
    local_160 = (double)fVar5;
    FUN_140e87930(&local_1b8,DAT_141a1f500,0x80000000,&local_160);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << (bVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

