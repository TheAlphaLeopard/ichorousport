// gml_Script____struct___541_gml_Object_oEnemySpider_Create_0 @ 0x140a8a350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___541_gml_Object_oEnemySpider_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_80 = "gml_Script_anon@5978@___struct___541@gml_Object_oEnemySpider_Create_0";
  local_88 = DAT_141dc7a50;
  local_78 = 0x154;
  pcVar3 = FUN_140041b30;
  DAT_141dc7a50 = &local_88;
  _eh_vector_constructor_iterator_(local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x156;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f2118,0x80000000,&local_118,uVar4,in_stack_fffffffffffffea0);
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f2148,0x80000000,&local_98,uVar4,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_158 = (longlong *)local_118;
  uStack_150 = uStack_110;
  uStack_14c = uStack_10c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_58 = local_f8;
  local_158 = (longlong *)local_98;
  uStack_150 = uStack_90;
  uStack_14c = uStack_8c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_50 = local_e8;
  local_158 = (longlong *)CONCAT44(uRam00000001419eb174,_DAT_1419eb170);
  uStack_150 = uRam00000001419eb178;
  uStack_14c = uRam00000001419eb17c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_48 = local_d8;
  ppuVar6 = &local_58;
  uVar4 = CONCAT44(uVar5,DAT_141a00c58);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,3,uVar4,ppuVar6);
  if (puVar2 != &local_128) {
    local_158 = (longlong *)*puVar2;
    uStack_150 = *(undefined4 *)(puVar2 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  FUN_140e87930(uVar1,DAT_1419f2118,0x80000000,&local_128);
  local_78 = 0x157;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_14c = 6;
  uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_108,uVar4,uVar7);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_a8,uVar4,uVar7);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f2078,0x80000000,&local_138,uVar4,uVar7);
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f2118,0x80000000,&local_118,uVar4,uVar7 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_158 = (longlong *)local_108;
  uStack_150 = uStack_100;
  uStack_14c = uStack_fc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_58 = local_f8;
  local_158 = (longlong *)local_a8;
  uStack_150 = uStack_a0;
  uStack_14c = uStack_9c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_158);
  local_50 = local_e8;
  local_158 = (longlong *)local_108;
  uStack_150 = uStack_100;
  uStack_14c = uStack_fc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_48 = local_d8;
  uStack_14c = local_12c;
  uStack_150 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)local_138;
  }
  else {
    FUN_1400419b0(&local_158,&local_138);
  }
  FUN_1400462a0(&local_158,&local_118);
  local_68 = (undefined4)local_158;
  uStack_64 = local_158._4_4_;
  uStack_60 = uStack_150;
  uStack_5c = uStack_14c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_68);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_40 = local_c8;
  local_68 = _DAT_1419eb140;
  uStack_64 = uRam00000001419eb144;
  uStack_60 = uRam00000001419eb148;
  uStack_5c = uRam00000001419eb14c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_68);
  local_38 = local_b8;
  FUN_140e634e0(param_1,param_2,&local_148,5,CONCAT44(uVar5,DAT_141a57990),&local_58);
  local_78 = 0x159;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar1,0);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

