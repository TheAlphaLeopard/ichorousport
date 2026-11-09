// gml_Object_oTumorHemo_Step_0 @ 0x140dea950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTumorHemo_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_c0 = "gml_Object_oTumorHemo_Create_0";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_b8 = 3;
  FUN_140e98b30(param_1,param_2);
  local_b8 = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0x3fd999999999999a;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_e8);
  local_b8 = 6;
  uStack_ec = 6;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0f7f8,0x80000000,&local_88,uVar5,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_118 = (longlong *)local_88;
  uStack_110 = uStack_80;
  uStack_10c = uStack_7c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_118);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_d8);
  local_b8 = 8;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02698);
  local_118 = (longlong *)CONCAT44(uRam0000000141dc7944,_DAT_141dc7940);
  uStack_110 = uRam0000000141dc7948;
  uStack_10c = uRam0000000141dc794c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_118);
  local_48 = local_78;
  FUN_140e609c0(param_1);
  uVar5 = CONCAT44(uVar6,DAT_141a0a0d8);
  ppuVar7 = &local_48;
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar5,&local_48);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  uStack_10c = 7;
  local_118 = (longlong *)CONCAT44(local_118._4_4_,10);
  FUN_140042560(&local_f8,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (&local_f8 != puVar2) {
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_118);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06248);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0xb;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_10c = 6;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0a828,0x80000000,&local_98,uVar5,uVar8);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e87440(uVar1,DAT_141a1ecb0,0x80000000,&local_a8,uVar5 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  local_118 = (longlong *)local_98;
  uStack_110 = uStack_90;
  uStack_10c = uStack_8c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_118);
  local_48 = local_78;
  local_118._0_4_ = (undefined4)local_a8;
  local_118._4_4_ = local_a8._4_4_;
  uStack_110 = uStack_a0;
  uStack_10c = uStack_9c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_118);
  local_40 = local_68;
  FUN_140e645a0(&local_118,gml_Object_oTumorProj_Step_0,param_1);
  local_f8 = (longlong *)CONCAT44(local_118._4_4_,(undefined4)local_118);
  uStack_f0 = uStack_110;
  uStack_ec = uStack_10c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_f8);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_38 = local_58;
  gml_Script_SignalRemove(param_1,param_2,&local_108,3,&local_48);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

