// gml_Script_InputVerbResetMetadata @ 0x1403794c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbResetMetadata
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffff10;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90 [2];
  double local_80;
  byte local_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  double *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_a0 = "gml_Script_InputVerbGroupsGet";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 8;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde83c) &&
     (_Init_thread_header(&DAT_141dde83c), DAT_141dde83c == -1)) {
    DAT_141dde840 = (longlong *)FUN_140e63aa0(DAT_1419f3da8);
    _Init_thread_footer(&DAT_141dde83c);
  }
  if (DAT_141ddc14d == '\0') {
    FUN_140e64380(DAT_141dde840,"gml_Script_InputVerbGroupsGet");
    FUN_140e64380(param_1,"gml_Script_InputVerbGroupsGet");
  }
  local_98 = 10;
  if (DAT_141ddc14d == '\0') {
    DAT_141ddc14d = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde840 + 0x10))(DAT_141dde840,DAT_141a04078);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar10 = 0;
    uVar6 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_d8,0,0);
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a03fc8,0x80000000,&local_68,uVar10,
                  in_stack_ffffffffffffff10 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141dde840);
    if (&local_68 != puVar5) {
      local_c8 = (undefined4)local_68;
      uStack_c4 = local_68._4_4_;
      uStack_c0 = uStack_60;
      uStack_bc = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_c8);
    }
    FUN_140e60910(1);
    puVar7 = (undefined4 *)(**(code **)(*DAT_141dde840 + 0x10))(DAT_141dde840,DAT_1419f3db8);
    FUN_140e609c0(DAT_141dde840);
    puVar8 = (undefined4 *)FUN_140e8da20(&local_48,param_1,0);
    if (puVar8 != puVar7) {
      local_c8 = *puVar8;
      uStack_c4 = puVar8[1];
      uStack_c0 = puVar8[2];
      uStack_bc = puVar8[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_98 = 0xd;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141dde840 + 8))(DAT_141dde840,DAT_1419f3db8);
  if (puVar5 != local_90) {
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_90[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_c8);
  }
  local_58 = local_90;
  local_c8 = _DAT_141dc64b0;
  uStack_c4 = uRam0000000141dc64b4;
  uStack_c0 = uRam0000000141dc64b8;
  uStack_bc = uRam0000000141dc64bc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_c8);
  local_50 = &local_80;
  uVar6 = CONCAT44(uVar11,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_58);
  local_98 = 0x10;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde840 + 8))(DAT_141dde840,DAT_141a04078);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(param_5);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar9 != &local_b8) {
    local_c8 = (undefined4)*plVar9;
    uStack_c4 = *(undefined4 *)((longlong)plVar9 + 4);
    uStack_c0 = (undefined4)plVar9[1];
    uStack_bc = *(undefined4 *)((longlong)plVar9 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_98 = 0x11;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  iVar3 = 0x32;
  do {
    iVar3 = iVar3 + -1;
    local_98 = 0x14;
    uVar10 = FUN_140e4a8b0(&local_b8);
    bVar2 = FUN_140e4a8b0(&local_e8);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (0 < (longlong)(uVar10 & 1L << (bVar2 & 0x3f))) {
      local_98 = 0x16;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar5 = (undefined8 *)(**(code **)(*DAT_141dde840 + 8))(DAT_141dde840,DAT_1419f3db8);
      if (puVar5 != local_90) {
        local_c8 = *(undefined4 *)puVar5;
        uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_c0 = *(undefined4 *)(puVar5 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_90[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_90);
        }
        FUN_140041b80(local_90,&local_c8);
      }
      local_58 = local_90;
      local_50 = &local_e8;
      uVar6 = CONCAT44(uVar11,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_58);
    }
    local_98 = 0x19;
    uVar4 = local_dc & 0xffffff;
    if (uVar4 == 0) {
LAB_140379a6d:
      local_e8 = local_e8 + 1.0;
    }
    else {
      if (uVar4 == 1) {
        local_e8 = (double)FUN_140e4b060(&local_e8);
        local_dc = 0;
        goto LAB_140379a6d;
      }
      if (uVar4 == 7) {
        local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_e8 = (double)((longlong)local_e8 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_dc = 0;
          goto LAB_140379a6d;
        }
        FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
      }
    }
    if (iVar3 < 1) {
      local_98 = 0x1c;
      if (puVar5 != param_3) {
        local_c8 = *(undefined4 *)puVar5;
        uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_c0 = *(undefined4 *)(puVar5 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_c8);
      }
      if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_48);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_a8;
      return param_3;
    }
  } while( true );
}

