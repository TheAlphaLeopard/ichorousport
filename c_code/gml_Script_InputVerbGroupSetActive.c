// gml_Script_InputVerbGroupSetActive @ 0x140377f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbGroupSetActive
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff00;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  double local_90;
  byte local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  double *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_c0 = "gml_Script_InputVerbGroupGetVerbs";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 7;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_dc = 0;
  local_e8 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde824) &&
     (_Init_thread_header(&DAT_141dde824), DAT_141dde824 == -1)) {
    DAT_141dde828 = (longlong *)FUN_140e63aa0(DAT_1419f3d48);
    _Init_thread_footer(&DAT_141dde824);
  }
  if (DAT_141ddc14b == '\0') {
    FUN_140e64380(DAT_141dde828,"gml_Script_InputVerbGroupGetVerbs");
    FUN_140e64380(param_1,"gml_Script_InputVerbGroupGetVerbs");
  }
  local_b8 = 9;
  if (DAT_141ddc14b == '\0') {
    DAT_141ddc14b = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde828 + 0x10))(DAT_141dde828,DAT_141a04078);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar12 = 0;
    uVar5 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_e8,0,0);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a03fc8,0x80000000,&local_78,uVar12,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141dde828);
    if (&local_78 != puVar4) {
      local_d8 = (undefined4)local_78;
      uStack_d4 = local_78._4_4_;
      uStack_d0 = uStack_70;
      uStack_cc = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_d8);
    }
    FUN_140e60910(1);
    puVar6 = (undefined4 *)(**(code **)(*DAT_141dde828 + 0x10))(DAT_141dde828,DAT_1419f3d68);
    FUN_140e609c0(DAT_141dde828);
    puVar7 = (undefined4 *)FUN_140e8da20(&local_58,param_1,0);
    if (puVar7 != puVar6) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0xc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141dde828 + 8))(DAT_141dde828,DAT_1419f3d68);
  if (puVar4 != &local_a0) {
    local_d8 = *(undefined4 *)puVar4;
    uStack_d4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_d8);
  }
  local_68 = &local_a0;
  local_d8 = _DAT_141dc64a0;
  uStack_d4 = uRam0000000141dc64a4;
  uStack_d0 = uRam0000000141dc64a8;
  uStack_cc = uRam0000000141dc64ac;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_d8);
  local_60 = &local_90;
  uVar5 = CONCAT44(uVar13,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_e8,2,uVar5,&local_68);
  local_b8 = 0xf;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  bVar1 = FUN_140e4a8b0(param_5);
  lVar10 = 1L << (bVar1 & 0x3f);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 10;
  local_b8 = 0x10;
  local_b0 = lVar10;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0.0;
  local_b8 = 0x11;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde828 + 8))(DAT_141dde828,DAT_141a04078);
  iVar11 = 0;
  if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
    iVar11 = *(int *)(*plVar8 + 0x24);
  }
  do {
    while( true ) {
      if (iVar11 < 1) {
        local_b8 = 0x1b;
        if (puVar4 != param_3) {
          local_d8 = *(undefined4 *)puVar4;
          uStack_d4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_d0 = *(undefined4 *)(puVar4 + 1);
          uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_d8);
        }
        if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_58);
        }
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        _eh_vector_destructor_iterator_(&local_a0,0x10,2,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_c8;
        return param_3;
      }
      iVar11 = iVar11 + -1;
      local_b8 = 0x13;
      plVar8 = (longlong *)(**(code **)(*DAT_141dde828 + 8))(DAT_141dde828,DAT_141a04078);
      uVar12 = FUN_140e4a8b0(&local_b0);
      iVar2 = FUN_140e4a740(&local_f8);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar10 = *plVar8, lVar10 != 0))
      {
        if ((iVar2 < 0) || (*(int *)(lVar10 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar10 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar9 = FUN_140e4a8b0(plVar8);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (0 < (longlong)(uVar12 & uVar9)) {
        local_b8 = 0x15;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        puVar4 = (undefined8 *)(**(code **)(*DAT_141dde828 + 8))(DAT_141dde828,DAT_1419f3d68);
        if (puVar4 != &local_a0) {
          local_d8 = *(undefined4 *)puVar4;
          uStack_d4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_d0 = *(undefined4 *)(puVar4 + 1);
          uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a0);
          }
          FUN_140041b80(&local_a0,&local_d8);
        }
        local_68 = &local_a0;
        local_60 = &local_f8;
        uVar5 = CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(param_1,param_2,&local_e8,2,uVar5,&local_68);
      }
      local_b8 = 0x18;
      uVar3 = local_ec & 0xffffff;
      if (uVar3 != 0) break;
LAB_1403784f8:
      local_f8 = local_f8 + 1.0;
    }
    if (uVar3 == 1) {
      local_f8 = (double)FUN_140e4b060(&local_f8);
      local_ec = 0;
      goto LAB_1403784f8;
    }
    if (uVar3 == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_f8 = (double)((longlong)local_f8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_ec = 0;
        goto LAB_1403784f8;
      }
      FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
    }
  } while( true );
}

