// gml_Object_oBreakableCandle_Create_0 @ 0x14084c440

void gml_Object_oBreakableCandle_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffed0;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  
  local_d0 = "gml_Object_oBreakableCage_Step_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_c8 = 3;
  FUN_140e98b30(param_1,param_2);
  local_c8 = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_110 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_118,puVar3);
  }
  FUN_140042560(&local_118,uVar2);
  FUN_1400460e0(uVar4,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_c8 = 7;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_11c = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_b8,uVar7,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_e8,uVar7,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000000000149;
  local_118 = (longlong *)0x100000000000149;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_58 = local_a8;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000000000000ea;
  local_118 = (longlong *)0x1000000000000ea;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_50 = local_98;
  local_128 = local_b8;
  uStack_120 = uStack_b0;
  uStack_11c = uStack_ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_128);
  local_48 = local_88;
  uStack_10c = local_dc;
  uStack_110 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_118 = local_e8;
  }
  else {
    FUN_1400419b0(&local_118,&local_e8);
  }
  uStack_11c = 7;
  local_128 = (longlong *)CONCAT44(local_128._4_4_,1);
  FUN_1400460e0(&local_118,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_118;
  uStack_120 = uStack_110;
  uStack_11c = uStack_10c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_128);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_40 = local_78;
  uVar4 = CONCAT44(uVar8,DAT_1419fdca8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar4,&local_58);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_68) {
    local_128 = (longlong *)*puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_128);
  }
  local_38 = &local_68;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar8,DAT_141a12628),&local_48);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_c8 = 9;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  local_c8 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09fa8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09fb8);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_110 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_118,puVar3);
  }
  FUN_140042560(&local_118,uVar4);
  uStack_11c = uStack_10c;
  uStack_120 = uStack_110;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_128 = local_118;
  }
  else {
    FUN_1400419b0(&local_128,&local_118);
  }
  FUN_140042560(&local_128,uVar2);
  FUN_1400460e0(uVar5,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_c8 = 0xf;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_108,0,uVar2,0);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

