// gml_Script_InputVerbGroupGetActive @ 0x140376b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbGroupGetActive
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_b0 = "gml_Script_InputVerbGroupDefine";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x18;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde80c) &&
     (_Init_thread_header(&DAT_141dde80c), DAT_141dde80c == -1)) {
    DAT_141dde810 = (longlong *)FUN_140e63aa0(DAT_1419f3cd8);
    _Init_thread_footer(&DAT_141dde80c);
  }
  if (DAT_141ddc149 == '\0') {
    FUN_140e64380(DAT_141dde810,"gml_Script_InputVerbGroupDefine");
    FUN_140e64380(param_1,"gml_Script_InputVerbGroupDefine");
  }
  local_a8 = 0x1a;
  if (DAT_141ddc149 == '\0') {
    DAT_141ddc149 = '\x01';
    ppuVar7 = (undefined1 **)(**(code **)(*DAT_141dde810 + 0x10))(DAT_141dde810,DAT_141a04078);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar11 = 0;
    uVar8 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_d8,0,0);
    FUN_140e87440(uVar8,DAT_141a03fc8,0x80000000,&local_88,uVar11 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde810);
    if (&local_88 != ppuVar7) {
      local_98 = local_88;
      uStack_90 = (undefined1 *)CONCAT44(uStack_7c,uStack_80);
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar7);
      }
      FUN_140041b80(ppuVar7,&local_98);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x1c;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  local_bc = 0;
  local_c8 = 0;
  iVar3 = FUN_140e851f0(puVar9,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_a8 = 0x1e;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_98 = (undefined1 *)CONCAT44(uRam0000000141dd1c7c,_DAT_141dd1c78);
    uStack_90 = (undefined1 *)CONCAT44(DAT_141dd1c84,uRam0000000141dd1c80);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_98);
    local_98 = local_78;
    gml_Script_InputPlugInExists(param_1,param_2,&local_d8,1,&local_98);
  }
  local_a8 = 0x21;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  local_bc = 0;
  local_c8 = 0x4049000000000000;
  uVar4 = FUN_140e851f0(puVar9,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (uVar4 < 0x80000000) {
    local_a8 = 0x23;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_58 = _DAT_141dd1c68;
    uStack_54 = uRam0000000141dd1c6c;
    uStack_50 = uRam0000000141dd1c70;
    uStack_4c = DAT_141dd1c74;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_58);
    local_98 = local_78;
    local_58 = _DAT_1419e4560;
    uStack_54 = uRam00000001419e4564;
    uStack_50 = uRam00000001419e4568;
    uStack_4c = uRam00000001419e456c;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
    uStack_90 = local_68;
    gml_Script_InputPlugInExists(param_1,param_2,&local_d8,2,&local_98);
  }
  local_a8 = 0x27;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  local_a8 = 0x28;
  if (param_4 < 2) {
    plVar10 = &DAT_1419df7b0;
  }
  else {
    plVar10 = (longlong *)param_5[1];
  }
  iVar3 = 0;
  if ((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) {
    iVar3 = *(int *)(*plVar10 + 0x24);
  }
joined_r0x000140376ffe:
  do {
    if (iVar3 < 1) {
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_b8;
      return param_3;
    }
    iVar3 = iVar3 + -1;
    local_a8 = 0x2b;
    puVar9 = (undefined8 *)(**(code **)(*DAT_141dde810 + 0x10))(DAT_141dde810,DAT_141a04078);
    FUN_140e609c0(DAT_141dde810);
    if (param_4 < 1) {
      bVar2 = FUN_140e4a8b0(&DAT_1419df7b0);
      iVar5 = FUN_140e4a740(&local_e8);
LAB_14037707e:
      plVar10 = &DAT_1419df7b0;
    }
    else {
      bVar2 = FUN_140e4a8b0(*param_5);
      iVar5 = FUN_140e4a740(&local_e8);
      if (param_4 < 2) goto LAB_14037707e;
      plVar10 = (longlong *)param_5[1];
    }
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar6 = FUN_140e4a740(plVar10);
    uVar8 = FUN_140e48e40(puVar9,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    FUN_14018a5b0(uVar8,1L << (bVar2 & 0x3f));
    FUN_140e60910(2);
    local_a8 = 0x2c;
    uVar4 = local_dc & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        local_e8 = (double)FUN_140e4b060(&local_e8);
        local_dc = 0;
        goto LAB_140377167;
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
          goto LAB_140377167;
        }
        FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
      }
      goto joined_r0x000140376ffe;
    }
LAB_140377167:
    local_e8 = local_e8 + 1.0;
  } while( true );
}

