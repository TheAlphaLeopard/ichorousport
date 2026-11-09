// gml_Script_worldwide_load @ 0x14064a5a0

undefined8 *
gml_Script_worldwide_load
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_58;
  byte local_4c;
  
  local_120 = "gml_Script_world_pos_to_gui";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 1;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00c38);
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 2;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_138);
  local_168._0_4_ = (undefined4)local_138;
  local_168._4_4_ = local_138._4_4_;
  uStack_160 = uStack_130;
  uStack_15c = uStack_12c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_168);
  local_80 = &local_58;
  uVar3 = CONCAT44(uVar10,DAT_141a00e38);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar3,&local_80);
  uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_100) {
    local_168._0_4_ = *(undefined4 *)puVar2;
    local_168._4_4_ = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_168);
  }
  local_118 = 3;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_138);
  local_168._0_4_ = (undefined4)local_138;
  local_168._4_4_ = local_138._4_4_;
  uStack_160 = uStack_130;
  uStack_15c = uStack_12c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_168);
  local_90 = &local_78;
  uVar3 = CONCAT44(uVar10,DAT_141a00dd8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar3,&local_90);
  uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_110) {
    local_168._0_4_ = *(undefined4 *)puVar2;
    local_168._4_4_ = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_168);
  }
  local_118 = 5;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_170 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_178);
  }
  FUN_1400462a0(&local_178,&local_100);
  local_168._0_4_ = (undefined4)local_178;
  local_168._4_4_ = local_178._4_4_;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  FUN_140041b80(&local_a0,&local_168);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 6;
  if (1 < param_4) {
    puVar2 = (undefined8 *)param_5[1];
  }
  uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_170 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_178,puVar2);
  }
  FUN_1400462a0(&local_178,&local_110);
  local_168._0_4_ = (undefined4)local_178;
  local_168._4_4_ = local_178._4_4_;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  FUN_140041b80(&local_b0,&local_168);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 7;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_138);
  local_168._0_4_ = (undefined4)local_138;
  local_168._4_4_ = local_138._4_4_;
  uStack_160 = uStack_130;
  uStack_15c = uStack_12c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_168);
  local_90 = &local_78;
  uVar9 = CONCAT44(uVar10,DAT_141a00c98);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar9,&local_90);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_16c = local_94;
  uStack_170 = local_98;
  bVar4 = (byte)local_94 & 0x1f;
  if ((1 << bVar4 & 0x46U) == 0) {
    local_178 = local_a0;
  }
  else {
    FUN_1400419b0(&local_178,&local_a0);
  }
  FUN_140046500(&local_178,uVar3);
  local_168._0_4_ = (undefined4)local_178;
  local_168._4_4_ = local_178._4_4_;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  FUN_140041b80(&local_c0,&local_168);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 8;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_138);
  local_168._0_4_ = (undefined4)local_138;
  local_168._4_4_ = local_138._4_4_;
  uStack_160 = uStack_130;
  uStack_15c = uStack_12c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_168);
  local_90 = &local_78;
  uVar9 = CONCAT44(uVar10,DAT_141a00d58);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar9,&local_90);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_16c = local_a4;
  uStack_170 = local_a8;
  bVar5 = (byte)local_a4 & 0x1f;
  if ((1 << bVar5 & 0x46U) == 0) {
    local_178 = local_b0;
  }
  else {
    FUN_1400419b0(&local_178,&local_b0);
  }
  FUN_140046500(&local_178,uVar3);
  local_168._0_4_ = (undefined4)local_178;
  local_168._4_4_ = local_178._4_4_;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  FUN_140041b80(&local_d0,&local_168);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 10;
  uStack_16c = local_b4;
  uStack_170 = local_b8;
  bVar6 = (byte)local_b4 & 0x1f;
  if ((1 << bVar6 & 0x46U) == 0) {
    local_178 = local_c0;
  }
  else {
    FUN_1400419b0(&local_178,&local_c0);
  }
  uStack_15c = 7;
  local_168._0_4_ = 0x160;
  FUN_140042560(&local_178,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_13c = 0;
  local_148 = 0x4050000000000000;
  FUN_1400460e0(&local_148,&local_178);
  local_168._0_4_ = (undefined4)local_148;
  local_168._4_4_ = local_148._4_4_;
  uStack_160 = uStack_140;
  uStack_15c = uStack_13c;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_168);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 0xb;
  uStack_16c = local_c4;
  uStack_170 = local_c8;
  bVar7 = (byte)local_c4 & 0x1f;
  if ((1 << bVar7 & 0x46U) == 0) {
    local_178 = local_d0;
  }
  else {
    FUN_1400419b0(&local_178,&local_d0);
  }
  uStack_15c = 7;
  local_168._0_4_ = 0x10e;
  FUN_140042560(&local_178,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_13c = 0;
  local_148 = 0;
  FUN_1400460e0(&local_148,&local_178);
  local_168._0_4_ = (undefined4)local_148;
  local_168._4_4_ = local_148._4_4_;
  uStack_160 = uStack_140;
  uStack_15c = uStack_13c;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_168);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 0xc;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_168,gml_GlobalScript_WORLDWIDE_INIT,0);
  if (&local_168 != puVar1) {
    local_148 = CONCAT44(local_168._4_4_,(undefined4)local_168);
    uStack_140 = uStack_160;
    uStack_13c = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_78) {
    local_148 = *puVar1;
    uStack_140 = *(undefined4 *)(puVar1 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_148);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_90 = &local_78;
  local_88 = &local_e0;
  local_80 = &local_f0;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar10,DAT_1419fd6d8),&local_90);
  if (puVar1 != param_3) {
    local_168._0_4_ = *(undefined4 *)puVar1;
    local_168._4_4_ = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << bVar7 & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << bVar6 & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << bVar5 & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << bVar4 & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

