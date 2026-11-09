// gml_Script_anon_44_gml_Object_oEnemyDireMutt_Other_76 @ 0x1409caae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_44_gml_Object_oEnemyDireMutt_Other_76(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_70 = "gml_Object_oEnemyDireMutt_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_68 = 3;
  FUN_140e98b30(param_1,param_2);
  local_68 = 5;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0178);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0178);
  if (puVar2 != &local_a8) {
    local_b8 = *puVar2;
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  local_48 = &local_a8;
  local_b8 = CONCAT44(uRam0000000141dc6eb4,_DAT_141dc6eb0);
  uStack_b0 = uRam0000000141dc6eb8;
  uStack_ac = uRam0000000141dc6ebc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_40 = local_98;
  uStack_ac = 0;
  local_b8 = 0x3ff0000000000000;
  FUN_140042560(&local_b8,uVar1);
  local_58 = (undefined4)local_b8;
  uStack_54 = local_b8._4_4_;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_58);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_38 = local_88;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_c8,3,&local_48);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

