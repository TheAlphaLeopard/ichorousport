// gml_Script_anon_2519___InputClassPlayer___InputClassPlayer @ 0x14004cd70

longlong *
gml_Script_anon_2519___InputClassPlayer___InputClassPlayer
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffee0;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_a0 = "gml_Script_anon@2039@__InputClassPlayer@__InputClassPlayer";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x3c;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_84 = 0;
  local_90 = 0;
  bVar3 = true;
  bVar2 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc1fc) {
    _Init_thread_header(&DAT_141ddc1fc);
    if (DAT_141ddc1fc == -1) {
      DAT_141ddc208 = (longlong *)FUN_140e63aa0(DAT_1419fd7e8);
      _Init_thread_footer(&DAT_141ddc1fc);
    }
  }
  if (DAT_141ddc02a == '\0') {
    FUN_140e64380(DAT_141ddc208,"gml_Script_anon@2039@__InputClassPlayer@__InputClassPlayer");
    FUN_140e64380(param_1,"gml_Script_anon@2039@__InputClassPlayer@__InputClassPlayer");
  }
  local_98 = 0x3e;
  if (DAT_141ddc02a == '\0') {
    DAT_141ddc02a = '\x01';
    plVar5 = (longlong *)(**(code **)(*DAT_141ddc208 + 0x10))(DAT_141ddc208,DAT_1419fd4f8);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar8 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_f8,0,0);
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
    pcVar7 = (code *)(uVar8 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_1419fd668,0x80000000,&local_c8,pcVar7,in_stack_fffffffffffffee0);
    FUN_140e609c0(DAT_141ddc208);
    if (&local_c8 != plVar5) {
      local_118 = local_c8;
      uStack_110 = uStack_c0;
      uStack_10c = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_118);
    }
    FUN_140e60910(1);
  }
  local_98 = 0x3f;
  plVar5 = (longlong *)(**(code **)(*DAT_141ddc208 + 8))(DAT_141ddc208,DAT_1419fd4f8);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar4 = FUN_140e4a740(param_5);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_e8) {
    local_118 = *plVar5;
    uStack_110 = (undefined4)plVar5[1];
    uStack_10c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  local_98 = 0x40;
  iVar4 = FUN_140e851f0(&local_e8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    plVar5 = (longlong *)FUN_140e8da20(&local_90,param_1,0);
    local_cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    local_d0 = (int)plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_d8 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_d8,plVar5);
    }
    plVar5 = &local_d8;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_e8,DAT_1419fd868,0x80000000,&local_b8,uVar8,
                  in_stack_fffffffffffffee0 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    local_118 = local_b8;
    uStack_110 = uStack_b0;
    uStack_10c = uStack_ac;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_118);
    local_58 = local_70;
    plVar5 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar9,DAT_1419fd0c8),&local_58);
    uStack_10c = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_110 = (int)plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_118 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_118,plVar5);
    }
    plVar5 = &local_118;
  }
  if (plVar5 != param_3) {
    local_50 = (undefined4)*plVar5;
    uStack_4c = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_48 = (undefined4)plVar5[1];
    uStack_44 = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_50);
  }
  if (bVar2) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
  }
  if ((bVar3) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

