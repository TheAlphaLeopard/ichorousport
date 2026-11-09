// gml_Script___Clear_anon_1004___InputMotionClass___InputMotionClass @ 0x1400b4120

undefined8 *
gml_Script___Clear_anon_1004___InputMotionClass___InputMotionClass
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script___InputKeyIsIgnored";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 5;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc6c0) &&
     (_Init_thread_header(&DAT_141ddc6c0), DAT_141ddc6c0 == -1)) {
    DAT_141ddc6c8 = (longlong *)FUN_140e63aa0(DAT_141a01b98);
    _Init_thread_footer(&DAT_141ddc6c0);
  }
  if (DAT_141ddc048 == '\0') {
    FUN_140e64380(DAT_141ddc6c8,"gml_Script___InputKeyIsIgnored");
    FUN_140e64380(param_1,"gml_Script___InputKeyIsIgnored");
  }
  local_58 = 7;
  if (DAT_141ddc048 == '\0') {
    DAT_141ddc048 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddc6c8 + 0x10))(DAT_141ddc6c8,DAT_141a01b68);
    FUN_140e609c0(DAT_141ddc6c8);
    FUN_140e645a0(&local_88,gml_GlobalScript___InputMotionClass,0);
    puVar4 = &local_88;
    puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_a8,0,puVar4,0);
    uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
    if (puVar3 != puVar2) {
      local_98 = *puVar3;
      uStack_90 = *(undefined4 *)(puVar3 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_98);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
  }
  local_58 = 0x5b;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x5b;
  }
  else {
    local_58 = 0x5c;
    if (param_4 < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*param_5;
    }
    uStack_8c = 0;
    local_98 = 0x4020000000000000;
    iVar1 = FUN_140e851f0(puVar2,&local_98,DAT_141955260,1);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar1 == -2 || -1 < iVar1) {
      if (param_4 < 1) {
        puVar2 = &DAT_1419df7b0;
      }
      else {
        puVar2 = (undefined8 *)*param_5;
      }
      uStack_7c = 0;
      local_88 = 0x40ebffe000000000;
      iVar1 = FUN_140e851f0(puVar2,&local_88,DAT_141955260,1);
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (iVar1 < 1) {
        local_58 = 0x5e;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 5;
        puVar2 = (undefined8 *)(**(code **)(*DAT_141ddc6c8 + 8))(DAT_141ddc6c8,DAT_141a01b68);
        if (puVar2 != &local_50) {
          local_88 = *puVar2;
          uStack_80 = *(undefined4 *)(puVar2 + 1);
          uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
          if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_50);
          }
          FUN_140041b80(&local_50,&local_88);
        }
        local_78 = &local_50;
        if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_40)) {
          local_88 = *puVar4;
          uStack_80 = *(undefined4 *)(puVar4 + 1);
          uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_40);
          }
          FUN_140041b80(&local_40,&local_88);
        }
        local_70 = &local_40;
        puVar4 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar5,DAT_141a01478),&local_78);
        if (puVar4 != param_3) {
          local_88 = *puVar4;
          uStack_80 = *(undefined4 *)(puVar4 + 1);
          uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_88);
        }
        goto LAB_1400b4547;
      }
    }
    local_58 = 0x5c;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0x3ff0000000000000;
LAB_1400b4547:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

