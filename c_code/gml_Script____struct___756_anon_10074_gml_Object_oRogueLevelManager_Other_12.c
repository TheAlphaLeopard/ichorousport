// gml_Script____struct___756_anon_10074_gml_Object_oRogueLevelManager_Other_12 @ 0x140d09ae0

undefined8 *
gml_Script____struct___756_anon_10074_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined1 local_108 [48];
  undefined4 local_d8 [3];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  local_120 = "gml_Script_anon@9845@gml_Object_oRogueLevelManager_Other_12";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x160;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,9,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa618);
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x161;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa898);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_158,
                gml_Script____struct___755_anon_10074_gml_Object_oRogueLevelManager_Other_12,0);
  if (&local_158 != puVar1) {
    local_168 = local_158;
    uStack_164 = uStack_154;
    uStack_160 = uStack_150;
    uStack_15c = uStack_14c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_168);
  }
  FUN_140e60910(1);
  if (puVar1 != local_d8) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_60 = local_d8;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140d09c9b:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_c8) goto LAB_140d09c9b;
  }
  local_58 = &local_c8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == &local_b8) goto LAB_140d09d15;
  }
  local_168 = *(undefined4 *)puVar3;
  uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_160 = *(undefined4 *)(puVar3 + 1);
  uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_168);
LAB_140d09d15:
  local_50 = &local_b8;
  if ((param_4 < 3) || (puVar4 = (undefined8 *)param_5[2], puVar4 != &local_a8)) {
    local_168 = *(undefined4 *)puVar4;
    uStack_164 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_160 = *(undefined4 *)(puVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_168);
  }
  local_48 = &local_a8;
  if (puVar2 != local_98) {
    local_168 = *puVar2;
    uStack_164 = puVar2[1];
    uStack_160 = puVar2[2];
    uStack_15c = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_168);
  }
  uVar5 = CONCAT44(uVar6,DAT_1419fd6d8);
  local_40 = local_98;
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar5,&local_60);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar1 != local_88) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_168);
  }
  local_38 = local_88;
  FUN_140e634e0(param_1,param_2,&local_138,2,CONCAT44(uVar6,DAT_1419fe568),&local_40);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

