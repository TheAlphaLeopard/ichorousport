// gml_Script_anon_2724_anon_2664_gml_Object_oInfinityManager_Create_0 @ 0x140b2e410

undefined8 *
gml_Script_anon_2724_anon_2664_gml_Object_oInfinityManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [16];
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined8 *local_38;
  
  local_c0 = "gml_Script_anon@1628@gml_Object_oInfinityManager_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x46;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x48;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3ad8);
  if (puVar2 != local_98) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
  }
  local_50 = local_98;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_88) goto LAB_140b2e557;
  }
  local_f8 = *(undefined4 *)puVar3;
  uStack_f4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_f8);
LAB_140b2e557:
  local_48 = &local_88;
  uVar6 = CONCAT44(uVar7,DAT_141a01478);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_50);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_b8 = 0x4b;
    puVar5 = (undefined8 *)FUN_140e8da20(&local_d8,param_1,0);
  }
  else {
    local_b8 = 0x49;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3ad8);
    if (puVar2 != local_78) {
      local_f8 = *puVar2;
      uStack_f4 = puVar2[1];
      uStack_f0 = puVar2[2];
      uStack_ec = puVar2[3];
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_f8);
    }
    local_40 = local_78;
    if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_68)) {
      local_f8 = *(undefined4 *)puVar5;
      uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_f0 = *(undefined4 *)(puVar5 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_f8);
    }
    local_38 = &local_68;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar7,DAT_1419ff4f8),&local_40);
  }
  if (puVar5 != param_3) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

