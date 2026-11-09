// gml_Script_jump_predictor @ 0x14039fb00

undefined8 *
gml_Script_jump_predictor
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  byte local_64;
  undefined8 local_60;
  byte local_54;
  undefined4 local_50 [3];
  byte local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined4 *local_30;
  
  local_80 = "gml_Script___jb_track_get_name";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x1a8;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1a9;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_60) goto LAB_14039fc05;
  }
  local_d8 = *puVar3;
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_d8);
LAB_14039fc05:
  local_38 = &local_60;
  uVar5 = CONCAT44(uVar7,DAT_1419fdc58);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar5,&local_38);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != &local_b8) {
    local_d8 = *puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  local_78 = 0x1aa;
  uStack_cc = DAT_141dd23c4;
  uStack_d0 = DAT_141dd23c0;
  if ((1 << ((byte)DAT_141dd23c4 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dd23b8;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dd23b8);
  }
  iVar2 = FUN_140e851f0(&local_b8,&local_d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar2 == 0) {
    local_78 = 0x1aa;
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    if (puVar6 != param_3) {
      local_d8 = *puVar6;
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  else {
    local_78 = 0x1ab;
    uStack_cc = DAT_141dd23d4;
    uStack_d0 = DAT_141dd23d0;
    if ((1 << ((byte)DAT_141dd23d4 & 0x1f) & 0x46U) == 0) {
      local_d8 = DAT_141dd23c8;
    }
    else {
      FUN_1400419b0(&local_d8,&DAT_141dd23c8);
    }
    iVar2 = FUN_140e851f0(&local_b8,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar2 != 0) {
      local_78 = 0x1ac;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar5 = FUN_1400424f0(&local_98,&DAT_141dd2388);
      FUN_140041c60(&local_70,uVar5);
      FUN_140041b30(&local_98);
      local_40 = &local_70;
      local_38 = &local_b8;
      uVar5 = FUN_140e64420(param_1,param_2,&local_c8,2,&local_40);
      FUN_140e59370(&local_98,uVar5);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_98,(ThrowInfo *)&DAT_141951a48);
    }
    local_78 = 0x1ab;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_70)) {
      local_d8 = *puVar6;
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_d8);
    }
    local_40 = &local_70;
    uStack_cc = DAT_141dd23a4;
    uStack_d0 = DAT_141dd23a0;
    if ((1 << ((byte)DAT_141dd23a4 & 0x1f) & 0x46U) == 0) {
      local_d8 = DAT_141dd2398;
    }
    else {
      FUN_1400419b0(&local_d8,&DAT_141dd2398);
    }
    uVar1 = uStack_cc;
    local_98 = (undefined4)local_d8;
    uStack_94 = local_d8._4_4_;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_98);
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_38 = &local_60;
    puVar4 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar7,DAT_1419f4d58),&local_40);
    if (puVar4 != local_50) {
      local_98 = *puVar4;
      uStack_94 = puVar4[1];
      uStack_90 = puVar4[2];
      uStack_8c = puVar4[3];
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_98);
    }
    local_30 = local_50;
    puVar6 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_c8,2,&local_38);
    if (puVar6 != param_3) {
      local_98 = *(undefined4 *)puVar6;
      uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_90 = *(undefined4 *)(puVar6 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_98);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

