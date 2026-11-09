// gml_Script_anon_3068_gml_Object_oEnemyDarner_Create_0 @ 0x140998b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3068_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 *local_160;
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
  uint local_f0 [2];
  undefined8 *local_e8;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 *local_78;
  undefined1 *local_70;
  
  local_180 = "gml_Script_BodyPart@gml_Object_oEnemyDarner_Create_0";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x2e;
  FUN_140041df0(local_f0,param_4,6,param_5);
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de21a4) &&
     (_Init_thread_header(&DAT_141de21a4), DAT_141de21a4 == -1)) {
    DAT_141de21b8 = FUN_140e63aa0(DAT_1419f0bc8);
    _Init_thread_footer(&DAT_141de21a4);
  }
  local_178 = 0x2e;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_f0[0];
  if ((int)local_f0[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e8[4];
  }
  iVar3 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_178 = 0x2e;
    if ((int)local_f0[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e8[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if ((int)local_f0[0] < 6) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e8[5];
  }
  iVar3 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_f0[0] < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_e8[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  FUN_140e643a0(param_1,DAT_141de21b8);
  local_178 = 0x30;
  if ((int)local_f0[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140998d75:
    local_1a8 = (undefined1 *)*puVar4;
    uStack_1a0 = *(undefined4 *)(puVar4 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_1a8);
  }
  else {
    puVar4 = (undefined8 *)*local_e8;
    if (puVar4 != &local_110) goto LAB_140998d75;
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_110);
  local_178 = 0x31;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  local_170 = 0;
  local_168 = 0;
  local_164 = 5;
  if ((int)local_f0[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e8[1];
    if (puVar4 == &local_d8) goto LAB_140998e3c;
  }
  local_1a8 = (undefined1 *)*puVar4;
  uStack_1a0 = *(undefined4 *)(puVar4 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1a8);
LAB_140998e3c:
  local_1a8 = (undefined1 *)CONCAT44(uRam0000000141dc6e94,_DAT_141dc6e90);
  uStack_1a0 = uRam0000000141dc6e98;
  uStack_19c = uRam0000000141dc6e9c;
  local_78 = &local_d8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1a8);
  local_70 = local_c8;
  puVar4 = (undefined8 *)FUN_140e79090(&local_170,2,&local_78);
  if (puVar4 != &local_120) {
    local_1a8 = (undefined1 *)*puVar4;
    uStack_1a0 = *(undefined4 *)(puVar4 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_1a8);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_120);
  local_178 = 0x32;
  if ((int)local_f0[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_e8[1];
  }
  local_154 = 0;
  local_160 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(puVar4,&local_160,DAT_141955260,0);
  bVar9 = iVar3 != 0;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if (bVar9) {
    local_154 = 0;
    local_160 = (undefined1 *)0x0;
    ppuVar5 = &local_160;
  }
  else {
    uStack_19c = 0;
    local_1a8 = (undefined1 *)0x3ff0000000000000;
    ppuVar5 = (undefined1 **)&local_1a8;
  }
  uVar2 = local_154;
  uVar1 = uStack_19c;
  local_198 = *(undefined4 *)ppuVar5;
  uStack_194 = *(undefined4 *)((longlong)ppuVar5 + 4);
  uStack_190 = *(undefined4 *)(ppuVar5 + 1);
  uStack_18c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_198);
  if ((bVar9) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_160);
  }
  if ((!bVar9) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_100);
  local_178 = 0x33;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  FUN_140e609c0(param_1);
  if ((int)local_f0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_e8[2];
  }
  if (puVar6 != puVar4) {
    local_198 = *(undefined4 *)puVar6;
    uStack_194 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_190 = *(undefined4 *)(puVar6 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_198);
  }
  FUN_140e60910(1);
  local_178 = 0x34;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58020);
  FUN_140e609c0(param_1);
  if ((int)local_f0[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_e8[3];
  }
  if (puVar6 != puVar4) {
    local_198 = *(undefined4 *)puVar6;
    uStack_194 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_190 = *(undefined4 *)(puVar6 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_198);
  }
  FUN_140e60910(1);
  local_178 = 0x35;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09668);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x4039000000000000;
  local_178 = 0x37;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_124 = 0;
  local_130 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_130);
  local_178 = 0x38;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_134 = 0;
  local_140 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_140);
  local_178 = 0x3a;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
  FUN_140e609c0(param_1);
  if ((int)local_f0[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_e8[4];
  }
  if (puVar6 != puVar4) {
    local_198 = *(undefined4 *)puVar6;
    uStack_194 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_190 = *(undefined4 *)(puVar6 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_198);
  }
  FUN_140e60910(1);
  local_178 = 0x3b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
  FUN_140e609c0(param_1);
  if (5 < (int)local_f0[0]) {
    puVar8 = (undefined8 *)local_e8[5];
  }
  if (puVar8 != puVar4) {
    local_198 = *(undefined4 *)puVar8;
    uStack_194 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_190 = *(undefined4 *)(puVar8 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_198);
  }
  FUN_140e60910(1);
  local_178 = 0x3d;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_144 = 0;
  local_150 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_150);
  local_178 = 0x3e;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09fa8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x3fb999999999999a;
  local_178 = 0x3f;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0d98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  local_178 = 0x40;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x3ff0000000000000;
  local_178 = 0x42;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0b88);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_draw_BodyPart_gml_Object_oEnemyDarner_Create_0,param_1);
  if (&local_1a8 != puVar8) {
    local_198 = (undefined4)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_178 = 0x4b;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a570f0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_anon_2164_BodyPart_gml_Object_oEnemyDarner_Create_0,param_1);
  if (&local_1a8 != puVar8) {
    local_198 = (undefined4)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_178 = 0x59;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_BodyPart_gml_Object_oEnemyDarner_Create_0,param_1);
  if (&local_1a8 != puVar8) {
    local_198 = (undefined4)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_178 = 0x69;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03228);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_anon_2921_gml_Object_oEnemyDarner_Create_0,param_1);
  if (&local_1a8 != puVar8) {
    local_198 = (undefined4)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_198);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
  if (0 < (int)local_f0[0]) {
    puVar8 = local_e8;
    do {
      puVar4 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_e8);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

