// gml_Script_anon_2088_gml_Object_oCollectionMenu_Create_0 @ 0x1408b23b0

undefined8 *
gml_Script_anon_2088_gml_Object_oCollectionMenu_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined8 **ppuVar7;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_f0 = "gml_Script_anon@1510@gml_Object_oCollectionMenu_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x24;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  local_11c = 0xffffff;
  local_128 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x25;
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (puVar1 != &local_b8) {
    local_148 = *puVar1;
    uStack_140 = *(undefined4 *)(puVar1 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  local_58 = &local_b8;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_a8) goto LAB_1408b2522;
  }
  local_148 = *puVar2;
  uStack_140 = *(undefined4 *)(puVar2 + 1);
  uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_148);
LAB_1408b2522:
  local_50 = &local_a8;
  ppuVar7 = &local_58;
  uVar5 = CONCAT44(uVar6,DAT_141a01138);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar5,ppuVar7);
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a0a918,0x80000000,&local_128,uVar5,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (puVar1 != &local_98) {
    local_148 = *puVar1;
    uStack_140 = *(undefined4 *)(puVar1 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  local_48 = &local_98;
  if ((param_4 < 2) || (puVar4 = (undefined8 *)param_5[1], puVar4 != &local_88)) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_148);
  }
  local_40 = &local_88;
  ppuVar7 = &local_48;
  uVar5 = CONCAT44(uVar6,DAT_141a01138);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_138,2,uVar5,ppuVar7);
  FUN_140e87440(uVar3,DAT_141a0a918,0x80000000,&local_108,uVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_13c = local_11c;
  uStack_140 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_148 = local_128;
  }
  else {
    FUN_1400419b0(&local_148,&local_128);
  }
  FUN_1400462a0(&local_148,&local_108);
  if (&local_148 != param_3) {
    local_78 = (undefined4)local_148;
    uStack_74 = local_148._4_4_;
    uStack_70 = uStack_140;
    uStack_6c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

