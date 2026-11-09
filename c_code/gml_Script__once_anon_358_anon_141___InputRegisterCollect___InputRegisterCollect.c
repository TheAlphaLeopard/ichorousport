// gml_Script__once_anon_358_anon_141___InputRegisterCollect___InputRegisterCollect @ 0x1400c1120

undefined8 *
gml_Script__once_anon_358_anon_141___InputRegisterCollect___InputRegisterCollect
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined4 local_78 [3];
  byte local_6c;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined4 *local_48;
  
  local_d0 = "gml_Script___InputPlugInRegisterCallbackInternal";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 7;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a02648);
  local_11c = 0;
  local_128 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7a4) &&
     (_Init_thread_header(&DAT_141ddc7a4), DAT_141ddc7a4 == -1)) {
    DAT_141ddc798 = (longlong *)FUN_140e63aa0(DAT_141a02678);
    _Init_thread_footer(&DAT_141ddc7a4);
  }
  if (DAT_141ddc04f == '\0') {
    FUN_140e64380(DAT_141ddc798,"gml_Script___InputPlugInRegisterCallbackInternal");
    FUN_140e64380(param_1,"gml_Script___InputPlugInRegisterCallbackInternal");
  }
  local_c8 = 9;
  if (DAT_141ddc04f == '\0') {
    DAT_141ddc04f = '\x01';
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddc798 + 0x10))(DAT_141ddc798,DAT_141a02588);
    FUN_140e609c0(DAT_141ddc798);
    uVar10 = 0;
    puVar5 = (undefined4 *)
             gml_Script_anon_825__playerArray_anon_93___InputSystemPlayerArray___InputSystemPlayerArray
                       (param_1,param_2,&local_128,0,0);
    if (puVar5 != puVar4) {
      local_118._0_4_ = *puVar5;
      local_118._4_4_ = puVar5[1];
      uStack_110 = puVar5[2];
      uStack_10c = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_118);
    }
    FUN_140e60910(1);
  }
  local_c8 = 0xb;
  plVar6 = (longlong *)(**(code **)(*DAT_141ddc798 + 8))(DAT_141ddc798,DAT_141a02588);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e4a740(puVar7);
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
  if (plVar6 != &local_e8) {
    local_118._0_4_ = (undefined4)*plVar6;
    local_118._4_4_ = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_110 = (undefined4)plVar6[1];
    uStack_10c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  local_c8 = 0xc;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_118,gml_Script___InputPlugInRegisterCallbackInternal,0);
  if (&local_118 != plVar3) {
    local_108 = (undefined4)local_118;
    uStack_104 = local_118._4_4_;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar3);
    }
    FUN_140041b80(plVar3,&local_108);
  }
  FUN_140e60910(1);
  if (plVar3 != &local_b8) {
    local_108 = (undefined4)*plVar3;
    uStack_104 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_100 = (undefined4)plVar3[1];
    uStack_fc = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_68 = &local_b8;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
    if (puVar7 == &local_a8) goto LAB_1400c1522;
  }
  local_108 = *(undefined4 *)puVar7;
  uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_100 = *(undefined4 *)(puVar7 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_108);
LAB_1400c1522:
  local_60 = &local_a8;
  if ((param_4 < 3) || (puVar8 = (undefined8 *)param_5[2], puVar8 != &local_98)) {
    local_108 = *(undefined4 *)puVar8;
    uStack_104 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_100 = *(undefined4 *)(puVar8 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
  }
  local_58 = &local_98;
  local_50 = &local_e8;
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,3,uVar9,&local_68);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar4 != local_78) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
  }
  local_48 = local_78;
  uVar9 = CONCAT44(uVar10,DAT_1419fe568);
  FUN_140e634e0(param_1,param_2,&local_128,2,uVar9,&local_50);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_c8 = 0x11;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_68 = &local_e8;
  FUN_140e645a0(&local_118,gml_GlobalScript___InputRegisterCollect,param_1);
  local_108 = (undefined4)local_118;
  uStack_104 = local_118._4_4_;
  uStack_100 = uStack_110;
  uStack_fc = uStack_10c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_108);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_60 = &local_a8;
  FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar10,DAT_141a02658),&local_68);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

