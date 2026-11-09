// gml_Script_shader_set_wall_blood @ 0x1404a07d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_shader_set_wall_blood
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_a0 = "gml_Script_mixer_change_db";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x2c;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x2e;
  local_c8 = CONCAT44(uRam00000001419e5f74,_DAT_1419e5f70);
  uStack_c0 = uRam00000001419e5f78;
  uStack_bc = uRam00000001419e5f7c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_c8);
  local_38 = local_68;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_d8);
  }
  uStack_bc = 0;
  local_c8 = 0x4034000000000000;
  FUN_140046500(&local_d8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = local_d8;
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_c8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_30 = local_58;
  if (0 < param_4) {
    puVar3 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar4,DAT_1419fa0f8),&local_38);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  FUN_140042560(&local_d8,uVar1);
  if (&local_d8 != param_3) {
    local_c8 = local_d8;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

