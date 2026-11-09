// gml_Script____struct___242_anon_8051_SnowState_SnowState @ 0x1404f7170

undefined8 *
gml_Script____struct___242_anon_8051_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  
  local_a0 = "gml_Script_anon@6841@SnowState@SnowState";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xe9;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xea;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcdb8);
  if (puVar2 != local_68) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_b8);
  }
  local_38 = local_68;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_58) goto LAB_1404f72b9;
  }
  local_b8 = *(undefined4 *)puVar3;
  uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_b0 = *(undefined4 *)(puVar3 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_b8);
LAB_1404f72b9:
  local_30 = &local_58;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar6,DAT_141a01138),&local_38);
  if (puVar3 != &local_c8) {
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_b8);
  }
  local_98 = 0xeb;
  iVar1 = FUN_140e851f0(&local_c8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 != 0) {
    local_98 = 0xeb;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcad8);
    local_48 = &local_c8;
    if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_78)) {
      local_b8 = *(undefined4 *)puVar5;
      uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_b0 = *(undefined4 *)(puVar5 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_b8);
    }
    local_40 = &local_78;
    FUN_140e63610(param_1,param_2,&local_d8,2,uVar4,&local_48);
  }
  local_98 = 0xed;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

