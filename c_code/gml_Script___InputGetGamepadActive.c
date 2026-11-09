// gml_Script___InputGetGamepadActive @ 0x140099110

double * gml_Script___InputGetGamepadActive(undefined8 param_1,undefined8 param_2,double *param_3)

{
  char cVar1;
  uint uVar2;
  double *pdVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double *local_res18 [2];
  double local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script___InputGetFirstConnectedGamepad";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 3;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  uStack_9c = 0;
  local_a8 = 0.0;
  local_48 = 6;
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_88,0,DAT_141a014d8,0);
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar3;
  }
  else {
    dVar6 = (double)FUN_140e4b060(pdVar3);
  }
  iVar5 = (int)dVar6;
  do {
    if (iVar5 < 1) {
      local_48 = 0x10;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = (double)&DAT_bff0000000000000;
LAB_14009930a:
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    iVar5 = iVar5 + -1;
    local_48 = 8;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    local_res18[0] = &local_a8;
    uVar4 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_98,1,local_res18);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_48 = 10;
      if (&local_a8 != param_3) {
        uStack_70 = uStack_a0;
        uStack_6c = uStack_9c;
        local_78 = local_a8;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_78);
      }
      goto LAB_14009930a;
    }
    local_48 = 0xd;
    uVar2 = uStack_9c & 0xffffff;
    if (uVar2 == 0) {
LAB_1400992c8:
      local_a8 = local_a8 + 1.0;
    }
    else {
      if (uVar2 == 1) {
        local_a8 = (double)FUN_140e4b060(&local_a8);
        uStack_9c = 0;
        goto LAB_1400992c8;
      }
      if (uVar2 == 7) {
        local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_a8 = (double)((longlong)local_a8 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          uStack_9c = 0;
          goto LAB_1400992c8;
        }
        FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
      }
    }
  } while( true );
}

