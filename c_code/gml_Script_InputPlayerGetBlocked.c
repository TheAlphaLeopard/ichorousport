// gml_Script_InputPlayerGetBlocked @ 0x1403451f0

undefined8 *
gml_Script_InputPlayerGetBlocked(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong in_stack_ffffffffffffff28;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  local_90 = "gml_Script_InputPlayerConnectedCount";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 5;
  uStack_bc = 0xffffff;
  local_c8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde4c0) &&
     (_Init_thread_header(&DAT_141dde4c0), DAT_141dde4c0 == -1)) {
    DAT_141dde4b8 = (longlong *)FUN_140e63aa0(DAT_1419f2828);
    _Init_thread_footer(&DAT_141dde4c0);
  }
  if (DAT_141ddc10b == '\0') {
    FUN_140e64380(DAT_141dde4b8,"gml_Script_InputPlayerConnectedCount");
    FUN_140e64380(param_1,"gml_Script_InputPlayerConnectedCount");
  }
  local_88 = 7;
  if (DAT_141ddc10b == '\0') {
    DAT_141ddc10b = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde4b8 + 0x10))(DAT_141dde4b8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde4b8);
    in_stack_ffffffffffffff28 = 0;
    puVar5 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_48,0,0);
    if (puVar5 != puVar4) {
      local_80 = *puVar5;
      uStack_78 = *(undefined4 *)(puVar5 + 1);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_80);
    }
    FUN_140e60910(1);
  }
  local_88 = 9;
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_bc = 0;
  local_c8 = 0.0;
  local_88 = 0xb;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0.0;
  local_88 = 0xe;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde4b8 + 8))(DAT_141dde4b8,DAT_141a026b8);
  iVar2 = FUN_140e4a740(&local_b8);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar6,DAT_1419fd858,0x80000000,&local_68,
                in_stack_ffffffffffffff28 & 0xffffffffffffff00,0);
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_38);
  local_88 = 0xf;
  local_4c = 10;
  local_58 = 2;
  iVar2 = FUN_140e851f0(&local_a8,&local_58,DAT_141955260,0);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar2 == 0) {
LAB_14034554e:
    local_88 = 0x11;
    uVar3 = uStack_bc & 0xffffff;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 == 7) {
          local_c8 = (double)CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
        }
        else if (uVar3 == 10) {
          local_c8 = (double)((longlong)local_c8 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            uStack_bc = 0;
            goto LAB_140345596;
          }
          FUN_140042910(&DAT_14172c3d8,&local_c8,&local_c8);
        }
        goto LAB_14034559f;
      }
      local_c8 = (double)FUN_140e4b060(&local_c8);
      uStack_bc = 0;
    }
LAB_140345596:
    local_c8 = local_c8 + 1.0;
  }
  else {
    uStack_74 = 10;
    local_80 = 3;
    iVar2 = FUN_140e851f0(&local_a8,&local_80,DAT_141955260,0);
    if ((1 << ((byte)uStack_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    if (iVar2 == 0) goto LAB_14034554e;
  }
LAB_14034559f:
  local_88 = 0x14;
  uVar3 = local_ac & 0xffffff;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      local_b8 = (double)FUN_140e4b060(&local_b8);
      local_ac = 0;
    }
    else {
      if (uVar3 == 7) {
        local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
        goto LAB_140345612;
      }
      if (uVar3 == 10) {
        local_b8 = (double)((longlong)local_b8 + 1);
        goto LAB_140345612;
      }
      if (uVar3 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
        goto LAB_140345612;
      }
      local_ac = 0;
    }
  }
  local_b8 = local_b8 + 1.0;
LAB_140345612:
  local_88 = 0x17;
  if (&local_c8 != param_3) {
    local_38 = (int)local_c8;
    uStack_34 = local_c8._4_4_;
    uStack_30 = uStack_c0;
    uStack_2c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

