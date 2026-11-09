// gml_Object_oBossGrub_Other_76 @ 0x140793c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossGrub_Other_76
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_f0 = "gml_Script_anon@1953@gml_Object_oBossGrub_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x68;
  FUN_140041df0(local_60,param_4,2,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_168,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_17c = 0;
  local_188 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x68;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_58;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_e8 = 0x68;
    uStack_19c = 0xd;
    local_1a8 = 0x3ff0000000000000;
    if ((int)local_60[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_58;
      if (&local_1a8 == puVar5) goto LAB_140793dc8;
    }
    local_198 = 0;
    uStack_194 = 0x3ff00000;
    uStack_190 = uStack_1a0;
    uStack_18c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_198);
  }
LAB_140793dc8:
  if ((int)local_60[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_58[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_19c = 0xd;
    local_1a8 = 0x3ff0000000000000;
    if ((int)local_60[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_58[1];
      if (&local_1a8 == puVar5) goto LAB_140793e47;
    }
    local_198 = 0;
    uStack_194 = 0x3ff00000;
    uStack_190 = uStack_1a0;
    uStack_18c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_198);
  }
LAB_140793e47:
  local_e8 = 0x6a;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uStack_19c = 0xf;
  local_1a8 = 0x1000000000000b5;
  local_198 = 0xb5;
  uStack_194 = 0x1000000;
  uStack_190 = uStack_1a0;
  uStack_18c = 0xf;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_198);
  local_88 = local_168;
  ppuVar10 = &local_88;
  uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_e8 = 0x6b;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uStack_19c = 6;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_d8,uVar8,uVar11);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_141a1b910,0x80000000,&local_98,uVar8,uVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_198 = (undefined4)local_d8;
    uStack_194 = local_d8._4_4_;
    uStack_190 = uStack_d0;
    uStack_18c = uStack_cc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_198);
    local_80 = local_158;
    local_198 = _DAT_1419e81a0;
    uStack_194 = uRam00000001419e81a4;
    uStack_190 = uRam00000001419e81a8;
    uStack_18c = uRam00000001419e81ac;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_198);
    local_78 = local_148;
    local_198 = (undefined4)local_98;
    uStack_194 = local_98._4_4_;
    uStack_190 = uStack_90;
    uStack_18c = uStack_8c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_198);
    local_70 = local_138;
    uStack_19c = 0xf;
    local_1a8 = 0x1000000000000b5;
    local_198 = 0xb5;
    uStack_194 = 0x1000000;
    uStack_190 = uStack_1a0;
    uStack_18c = 0xf;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_198);
    local_68 = local_128;
    ppuVar10 = &local_80;
    uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
    FUN_140e634e0(param_1,param_2,&local_178,4,uVar8,ppuVar10);
  }
  local_e8 = 0x6d;
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_58;
  }
  cVar1 = FUN_140e491e0(puVar5);
  if (cVar1 != '\0') {
    local_e8 = 0x6d;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uStack_19c = 6;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_d8,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 0xf;
    local_1a8 = 0x1000000000000b5;
    uVar4 = param_1;
    FUN_140e87170(&local_1a8,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_198 = (undefined4)local_d8;
    uStack_194 = local_d8._4_4_;
    uStack_190 = uStack_d0;
    uStack_18c = uStack_cc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_198);
    local_88 = local_168;
    local_198 = (undefined4)local_a8;
    uStack_194 = local_a8._4_4_;
    uStack_190 = uStack_a0;
    uStack_18c = uStack_9c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_198);
    local_80 = local_158;
    uStack_19c = 0;
    local_1a8 = 0x3fa47ae147ae147b;
    FUN_140042560(&local_1a8,uVar3);
    local_198 = (undefined4)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_198);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_78 = local_148;
    ppuVar10 = &local_88;
    uVar8 = CONCAT44(uVar9,DAT_141a00c58);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,3,uVar8,ppuVar10);
    if (puVar5 != &local_108) {
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_198);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_108);
  }
  local_e8 = 0x6e;
  if (1 < (int)local_60[0]) {
    puVar7 = (undefined8 *)local_58[1];
  }
  cVar1 = FUN_140e491e0(puVar7);
  if (cVar1 != '\0') {
    local_e8 = 0x6e;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uStack_19c = 6;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_b8,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 0xf;
    local_1a8 = 0x1000000000000b5;
    FUN_140e87170(&local_1a8,DAT_1419fe158,0x80000000,&local_c8,param_1,param_2);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_198 = (undefined4)local_b8;
    uStack_194 = local_b8._4_4_;
    uStack_190 = uStack_b0;
    uStack_18c = uStack_ac;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_198);
    local_88 = local_168;
    local_198 = (undefined4)local_c8;
    uStack_194 = local_c8._4_4_;
    uStack_190 = uStack_c0;
    uStack_18c = uStack_bc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_198);
    local_80 = local_158;
    uStack_19c = 0;
    local_1a8 = 0x3fe4cccccccccccd;
    FUN_140042560(&local_1a8,uVar3);
    local_198 = (undefined4)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_198);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_78 = local_148;
    puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_188,3,&local_88);
    if (puVar7 != &local_118) {
      local_198 = *(undefined4 *)puVar7;
      uStack_194 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_190 = *(undefined4 *)(puVar7 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_198);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_118);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,5,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar7 = local_58;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

