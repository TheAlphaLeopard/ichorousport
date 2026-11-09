// gml_Script_InputDeviceGetGamepadType @ 0x14031e700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputDeviceGetGamepadType
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  longlong local_e0;
  byte local_d4;
  longlong local_d0;
  byte local_c4;
  longlong local_c0;
  byte local_b4;
  longlong local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_f0 = "gml_Script_InputDeviceGetDescription";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xb;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_e0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_fc = 0;
  local_108 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde188) &&
     (_Init_thread_header(&DAT_141dde188), DAT_141dde188 == -1)) {
    DAT_141dde180 = (longlong *)FUN_140e63aa0(DAT_1419f0e18);
    _Init_thread_footer(&DAT_141dde188);
  }
  if (DAT_141ddc0d4 == '\0') {
    FUN_140e64380(DAT_141dde180,"gml_Script_InputDeviceGetDescription");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetDescription");
  }
  local_e8 = 0xd;
  if (DAT_141ddc0d4 == '\0') {
    DAT_141ddc0d4 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde180 + 0x10))(DAT_141dde180,DAT_141a01188);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar12 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_108,0,0);
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a011a8,0x80000000,&local_68,uVar12,in_stack_fffffffffffffee0);
    uVar10 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141dde180);
    if (&local_68 != puVar5) {
      local_118 = local_68;
      uStack_110 = uStack_60;
      uStack_10c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_118);
    }
    FUN_140e60910(1);
  }
  local_e8 = 0xf;
  plVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_10c = 0;
  local_118 = 0;
  uVar3 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar3 < 0x80000000) {
    local_e8 = 0x11;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    uStack_10c = 0;
    local_118 = 0;
    iVar4 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uVar3 = 1 << ((byte)local_fc & 0x1f);
    if (iVar4 != -2 && iVar4 < 0) {
      local_e8 = 0x11;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      local_118 = CONCAT44(uRam0000000141dd01ac,_DAT_141dd01a8);
      uStack_110 = uRam0000000141dd01b0;
      uStack_10c = DAT_141dd01b4;
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_118);
      local_90 = &local_e0;
      if ((param_4 < 1) || (plVar9 = (longlong *)*param_5, plVar9 != &local_d0)) {
        local_118 = *plVar9;
        uStack_110 = (undefined4)plVar9[1];
        uStack_10c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_118);
      }
LAB_14031ead2:
      local_88 = &local_d0;
      pplVar7 = &local_90;
      puVar5 = &local_108;
LAB_14031eae8:
      plVar9 = (longlong *)
               FUN_140e634e0(param_1,param_2,puVar5,2,CONCAT44(uVar10,DAT_1419f0e08),pplVar7);
      if (plVar9 == param_3) goto LAB_14031f05f;
      uVar10 = (int)*plVar9;
      uVar11 = *(undefined4 *)((longlong)plVar9 + 4);
      uStack_110 = (int)plVar9[1];
      uStack_10c = *(undefined4 *)((longlong)plVar9 + 0xc);
      goto LAB_14031f036;
    }
    local_e8 = 0x12;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if (param_4 < 1) {
      plVar8 = &DAT_1419df7b0;
LAB_14031eb53:
      local_118 = *plVar8;
      uStack_110 = (undefined4)plVar8[1];
      uStack_10c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_118);
    }
    else {
      plVar8 = (longlong *)*param_5;
      if (plVar8 != &local_e0) goto LAB_14031eb53;
    }
    local_90 = &local_e0;
    pplVar7 = &local_90;
    uVar6 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_108,1,pplVar7);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_e8 = 0x12;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      uVar10 = (undefined4)((ulonglong)pplVar7 >> 0x20);
      local_a0 = 0;
      local_98 = 0;
      local_94 = 5;
      local_118 = CONCAT44(uRam0000000141dd01ac,_DAT_141dd01a8);
      uStack_110 = uRam0000000141dd01b0;
      uStack_10c = DAT_141dd01b4;
      if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_118);
      local_88 = &local_d0;
      if ((param_4 < 1) || (plVar9 = (longlong *)*param_5, plVar9 != &local_c0)) {
        local_118 = *plVar9;
        uStack_110 = (undefined4)plVar9[1];
        uStack_10c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_118);
      }
      local_80 = &local_c0;
      pplVar7 = &local_88;
      puVar5 = &local_a0;
      goto LAB_14031eae8;
    }
    local_e8 = 0x14;
    plVar8 = (longlong *)(**(code **)(*DAT_141dde180 + 8))(DAT_141dde180,DAT_141a01188);
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    iVar4 = FUN_140e4a740(puVar5);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar8 != &local_b0) {
      local_118 = *plVar8;
      uStack_110 = (undefined4)plVar8[1];
      uStack_10c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_118);
    }
    local_e8 = 0x15;
    iVar4 = FUN_140e851f0(&local_b0,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar4 == 0) {
LAB_14031edd4:
      uVar10 = (undefined4)((ulonglong)pplVar7 >> 0x20);
      local_e8 = 0x15;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      local_118 = CONCAT44(uRam0000000141dd01ac,_DAT_141dd01a8);
      uStack_110 = uRam0000000141dd01b0;
      uStack_10c = DAT_141dd01b4;
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_118);
      local_90 = &local_e0;
      if ((param_4 < 1) || (plVar9 = (longlong *)*param_5, plVar9 != &local_d0)) {
        local_118 = *plVar9;
        uStack_110 = (undefined4)plVar9[1];
        uStack_10c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_118);
      }
      goto LAB_14031ead2;
    }
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
    pplVar7 = (longlong **)((ulonglong)pplVar7 & 0xffffffffffffff00);
    FUN_140e87440(&local_b0,DAT_1419fd318,0x80000000,&local_58,pplVar7,in_stack_fffffffffffffee0);
    cVar2 = FUN_140e491e0(&local_58);
    if (cVar2 != '\0') goto LAB_14031edd4;
    local_e8 = 0x17;
    FUN_140e87440(&local_b0,DAT_1419fd238,0x80000000,&local_78,
                  (ulonglong)pplVar7 & 0xffffffffffffff00,
                  in_stack_fffffffffffffee0 & 0xffffffffffffff00);
    if (&local_78 == param_3) goto LAB_14031f05f;
    local_118 = local_78;
    uStack_110 = uStack_70;
    uStack_10c = uStack_6c;
  }
  else {
    local_e8 = 0x19;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    uStack_10c = 0;
    local_118 = -0x3fa7000000000000;
    iVar4 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar4 == 0) {
      local_e8 = 0x1b;
      if (param_3 == (longlong *)&DAT_141dd01b8) goto LAB_14031f05f;
      uVar10 = _DAT_141dd01b8;
      uVar11 = uRam0000000141dd01bc;
      uStack_110 = uRam0000000141dd01c0;
      uStack_10c = DAT_141dd01c4;
    }
    else {
      local_e8 = 0x1d;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*param_5;
      }
      uStack_10c = 0;
      local_118 = -0x3f97000000000000;
      iVar4 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,0);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (iVar4 == 0) {
        local_e8 = 0x1f;
        if (param_3 == (longlong *)&DAT_141dd0178) goto LAB_14031f05f;
        uVar10 = _DAT_141dd0178;
        uVar11 = uRam0000000141dd017c;
        uStack_110 = uRam0000000141dd0180;
        uStack_10c = DAT_141dd0184;
      }
      else {
        local_e8 = 0x21;
        if (0 < param_4) {
          plVar9 = (longlong *)*param_5;
        }
        uStack_10c = 0;
        local_118 = -0x3f8d400000000000;
        iVar4 = FUN_140e851f0(plVar9,&local_118,DAT_141955260,0);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if (iVar4 == 0) {
          local_e8 = 0x23;
          if (param_3 == (longlong *)&DAT_141dd0188) goto LAB_14031f05f;
          uVar10 = _DAT_141dd0188;
          uVar11 = uRam0000000141dd018c;
          uStack_110 = uRam0000000141dd0190;
          uStack_10c = DAT_141dd0194;
        }
        else {
          local_e8 = 0x26;
          if (param_3 == (longlong *)&DAT_141dd0198) goto LAB_14031f05f;
          uVar10 = _DAT_141dd0198;
          uVar11 = uRam0000000141dd019c;
          uStack_110 = uRam0000000141dd01a0;
          uStack_10c = DAT_141dd01a4;
        }
      }
    }
LAB_14031f036:
    local_118 = CONCAT44(uVar11,uVar10);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_118);
LAB_14031f05f:
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_e0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

