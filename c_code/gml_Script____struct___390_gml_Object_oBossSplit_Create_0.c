// gml_Script____struct___390_gml_Object_oBossSplit_Create_0 @ 0x1407f1630

undefined8 *
gml_Script____struct___390_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *local_res8;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = "gml_Script_anon@16708@___struct___390@gml_Object_oBossSplit_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x32d;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x32f;
  uStack_3c = 0xf;
  local_48 = 0x1000001000002e0;
  local_68 = 0x2e0;
  uStack_64 = 0x1000001;
  uStack_60 = uStack_40;
  uStack_5c = 0xf;
  FUN_140041b80(&local_58,&local_68);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_58);
  local_98 = 0x330;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09658);
  if (puVar2 != local_c8) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_68);
  }
  local_res8 = local_c8;
  uVar7 = CONCAT44(uVar8,DAT_141a097d8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar7,&local_res8);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_98 = 0x331;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09658);
    FUN_140e609c0(param_1);
    uVar3 = CONCAT44(uVar8,DAT_141a09838);
    puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,0,uVar3,0);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != puVar4) {
      local_68 = *puVar5;
      uStack_64 = puVar5[1];
      uStack_60 = puVar5[2];
      uStack_5c = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_68);
    }
    FUN_140e60910(1);
  }
  local_98 = 0x332;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if (puVar2 != local_c8) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_68);
  }
  local_res8 = local_c8;
  FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar8,DAT_141a099a8),&local_res8);
  local_98 = 0x333;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a096d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_98 = 0x334;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09668);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x402e000000000000;
  local_98 = 0x336;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0xc010000000000000;
  local_98 = 0x337;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a09658);
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_80);
  local_98 = 0x338;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a09978,0x80000000,&local_90);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

