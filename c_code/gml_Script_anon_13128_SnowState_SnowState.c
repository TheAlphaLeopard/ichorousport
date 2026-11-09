// gml_Script_anon_13128_SnowState_SnowState @ 0x140501330

longlong *
gml_Script_anon_13128_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  
  local_70 = "gml_Script_anon@12883@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x199;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  uVar7 = 0;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x19a;
  cVar2 = '\0';
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_a8) goto LAB_14050142e;
  }
  local_d8 = *(undefined4 *)puVar3;
  uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_d8);
LAB_14050142e:
  local_58 = &local_a8;
  uVar8 = CONCAT44(uVar9,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar8,&local_58);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
    if (puVar5 != local_98) {
      local_d8 = *puVar5;
      uStack_d4 = puVar5[1];
      uStack_d0 = puVar5[2];
      uStack_cc = puVar5[3];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_d8);
    }
    local_50 = local_98;
    if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_88)) {
      local_d8 = *(undefined4 *)puVar6;
      uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_d8);
    }
    local_48 = &local_88;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar9,DAT_1419fcba8),&local_50);
    cVar2 = FUN_140e491e0(uVar4);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar2 != '\0') {
    uVar7 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

